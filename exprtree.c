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

int getLabel(){
	return ++label;
}

reg_index codeGen(struct tnode *t){
	reg_index r1,r2;
	int l1,l2;
	switch(t->nodetype){
		case NODE_NUM:
			r1=getReg();
			fprintf(target_file, "MOV R%d, %d\n", r1, t->val);
			return r1;
		case NODE_VAR:
			r1=getReg();
			r2=(int)t->varname[0];
			fprintf(target_file, "MOV R%d, [%d]\n", r1, 4096+r2-'a');
			return r1;
		case NODE_PLUS:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_MINUS:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "SUB R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_MUL:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "MUL R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_DIV:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "DIV R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_LT:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "LT R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_GT:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "GT R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_LE:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "LE R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_GE:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "GE R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_NE:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "NE R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_EQ:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "EQ R%d, R%d\n", r1, r2);
			freeReg();
			break;
		case NODE_ASSIGN:
			r1=codeGen(t->ptr2);
			r2=(int)t->ptr1->varname[0];
			fprintf(target_file, "MOV [%d], R%d\n", 4096+r2-'a', r1);
			freeReg();
			break;
		case NODE_IF:
			l1=getLabel();
			r1=codeGen(t->ptr1);
			fprintf(target_file, "JZ R%d, L%d\n", r1, l1);
			freeReg();
			r2=codeGen(t->ptr2);
			fprintf(target_file, "L%d:\n", l1);
			break;
		case NODE_ELIF:
			l1=getLabel();
			l2=getLabel();
			r1=codeGen(t->ptr1);
			fprintf(target_file, "JZ R%d, L%d\n", r1, l1);
			freeReg();
			r2=codeGen(t->ptr2);
			fprintf(target_file, "JMP L%d\n", l2);
			fprintf(target_file, "L%d:\n", l1);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "L%d:\n", l2);
			break;
		case NODE_WHILE:
			l1=getLabel();
			l2=getLabel();
			insLoop(l2, l1);
			fprintf(target_file, "L%d:\n", l1);
			r1=codeGen(t->ptr1);
			fprintf(target_file, "JZ R%d, L%d\n", r1, l2);
			freeReg();
			r2=codeGen(t->ptr2);
			fprintf(target_file, "JMP L%d\n", l1);
			fprintf(target_file, "L%d:\n", l2);
			delLoop();
			break;
		case NODE_BREAK:
			if(lHead!=NULL)
				fprintf(target_file, "JMP L%d\n", lHead->br);
			break;
		case NODE_CONTINUE:
			if(lHead!=NULL)
				fprintf(target_file, "JMP L%d\n", lHead->cn);
			break;
		case NODE_WRITE:
			r1=codeGen(t->ptr1);
			r2=getReg();
			fprintf(target_file, "MOV R%d, \"Write\"\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, -2\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "PUSH R%d\n", r1);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "CALL 0\n");
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			freeReg();
			freeReg();
			break;
		case NODE_READ:
			r1=(int)t->ptr1->varname[0];
			r2=getReg();
			fprintf(target_file, "MOV R%d, \"Read\"\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, -1\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, %d\n", r2, 4096+r1-'a');
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "CALL 0\n");
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			freeReg();
			freeReg();
			break;
		case NODE_CONN:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			break;
		default:
			printf("Error\n");
			exit(1);
	}
	return r1;
}

void typeCheck(int type1, int type2){
	if((type1!=inttype) || (type2!=inttype)){
		printf("Type Mismatch\n");
		exit(1);
	}
}

void print(struct tnode *t){
	int i;
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
	fprintf(target_file, "MOV SP, 4095\n");
	for(i=0;i<26;i++)
		fprintf(target_file, "PUSH R0\n");
	if(t!=NULL)
		reg=codeGen(t);
	fprintf(target_file, "INT 10\n");
}

struct tnode* createTree(int val, int type, char *varname, int nodetype, struct tnode *ptr1, struct tnode *ptr2, struct tnode *ptr3){
	struct tnode *temp;
	temp=(struct tnode*)malloc(sizeof(struct tnode));
	temp->val=val;
	temp->type=type;
	temp->nodetype=nodetype;
	switch(nodetype){
		case NODE_NUM:
			temp->type=inttype;
			break;
		case NODE_VAR:
			temp->varname=malloc(sizeof(varname));
			strcpy(temp->varname, varname);
			temp->type=inttype;
			break;
	}
	temp->ptr1=ptr1;
	temp->ptr2=ptr2;
	temp->ptr3=ptr3;
}

void insLoop(int br, int cn){
	struct loop *temp;
	temp=(struct loop*)malloc(sizeof(struct loop));
	temp->br=br;
	temp->cn=cn;
	temp->next=lHead;
	lHead=temp;
}
void delLoop(){
	struct loop *temp;
	if(lHead==NULL)
		return;
	temp=lHead;
	lHead=lHead->next;
	free(temp);
}
