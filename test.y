%{

	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	
	#define YYSTYPE tnode*
	#define reg_index int

	typedef struct tnode{
		int val; char *op;
		struct tnode *left,*right;
	}tnode;

	int reg;
	FILE *target_file;

	int yylex(void);

	reg_index codeGen(struct tnode *t);
	reg_index getReg(void);
	void freeReg(void);
	void print(struct tnode *t);

	struct tnode* makeLeafNode(int n);
	struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r);
	void preOrder(struct tnode *t);
	void postOrder(struct tnode *t);
	
%}

%token NUM PLUS MINUS MUL DIV END
%left PLUS MINUS
%left MUL DIV

%%

program : E END {
			$$ = $2;
			print($1);
			exit(1);
		}
	;
	
E : 	E PLUS E 	{$$ = makeOperatorNode('+',$1,$3);}
	| E MINUS E 	{$$ = makeOperatorNode('-',$1,$3);}
	| E MUL E 	{$$ = makeOperatorNode('*',$1,$3);}
	| E DIV E 	{$$ = makeOperatorNode('/',$1,$3);}
	| '(' E ')' 	{$$ = $2;}
	| NUM		{$$ = $1;}
	;

%%

yyerror(char const *s){
	printf("yyerror %s",s);
}

reg_index getReg(){
	if(reg>=20){
		printf("Out of registers\n");
		exit(1);
	}
	return ++reg;
}

void freeReg(){
	if(reg>=0)
		reg--;
}

reg_index codeGen(struct tnode *t){
	reg_index r1,r2;
	if(t->op==NULL){
		r1=getReg();
		fprintf(target_file, "MOV R%d, %d\n", r1, t->val);
		return r1;
	}
	r1=codeGen(t->left);
	r2=codeGen(t->right);
	if(!strcmp(t->op, "+"))
		fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
	else if(!strcmp(t->op, "-"))
		fprintf(target_file, "SUB R%d, R%d\n", r1, r2);
	else if(!strcmp(t->op, "*"))
		fprintf(target_file, "MUL R%d, R%d\n", r1, r2);
	else if(!strcmp(t->op, "/"))
		fprintf(target_file, "DIV R%d, R%d\n", r1, r2);
	else{
		printf("Error\n");
		exit(1);
	}
	freeReg();
	return r1;
}

void print(struct tnode *t){
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\nMOV SP, 4095\n");
	reg=codeGen(t);
	fprintf(target_file, "MOV R2, \"Write\"\nPUSH R2\nMOV R2, -2\nPUSH R2\nMOV R2, R%d\nPUSH R2\nPUSH R2\nPUSH R2\n", reg);
	fprintf(target_file, "CALL 0\n");
	fprintf(target_file, "POP R0\nPOP R1\nPOP R1\nPOP R1\nPOP R1\n");
	fprintf(target_file, "INT 10\n");
}

struct tnode* makeLeafNode(int n){
	struct tnode *temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->op = NULL;
	temp->val = n;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

struct tnode* makeOperatorNode(char c,struct tnode *l,struct tnode *r){
	struct tnode *temp;
	temp = (struct tnode*)malloc(sizeof(struct tnode));
	temp->op = malloc(sizeof(char));
	*(temp->op) = c;
	temp->left = l;
	temp->right = r;
	return temp;
}

void preOrder(struct tnode *t){
	if(t->op==NULL){
		printf("%d ",t->val);
		return;
	}
	printf("%s ",t->op);
	preOrder(t->left);
	preOrder(t->right);
}

void postOrder(struct tnode *t){
	if(t->op==NULL){
		printf("%d ",t->val);
		return;
	}
	postOrder(t->left);
	postOrder(t->right);
	printf("%s ",t->op);
}

int main(void){
	reg=-1;
	target_file=fopen("test.xsm","w");
	yyparse();
	return 0;
}
