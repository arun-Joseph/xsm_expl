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
			r1=codeGen(t->left);
			r2=codeGen(t->right);
			fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
			break;
		case NODE_MINUS:
			r1=codeGen(t->left);
			r2=codeGen(t->right);
			fprintf(target_file, "SUB R%d, R%d\n", r1, r2);
			break;
		case NODE_MUL:
			r1=codeGen(t->left);
			r2=codeGen(t->right);
			fprintf(target_file, "MUL R%d, R%d\n", r1, r2);
			break;
		case NODE_DIV:
			r1=codeGen(t->left);
			r2=codeGen(t->right);
			fprintf(target_file, "DIV R%d, R%d\n", r1, r2);
			break;
		case NODE_ASSIGN:
			r1=codeGen(t->right);
			r2=(int)t->left->varname[0];
			fprintf(target_file, "MOV [%d], R%d\n", 4096+r2-'a', r1);
			break;
		case NODE_WRITE:
			r1=codeGen(t->left);
			fprintf(target_file, "MOV R2, \"Write\"\n");
			fprintf(target_file, "PUSH R2\n");
			fprintf(target_file, "MOV R2, -2\n");
			fprintf(target_file, "PUSH R2\n");
			fprintf(target_file, "PUSH R%d\n", r1);
			fprintf(target_file, "PUSH R2\n");
			fprintf(target_file, "PUSH R2\n");
			fprintf(target_file, "CALL 0\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "POP R1\n");
			fprintf(target_file, "POP R1\n");
			fprintf(target_file, "POP R1\n");
			fprintf(target_file, "POP R1\n");
			break;
		case NODE_READ:
			r1=(int)t->left->varname[0];
			fprintf(target_file, "MOV R2, \"Read\"\n");
			fprintf(target_file, "PUSH R2\n");
			fprintf(target_file, "MOV R2, -1\n");
			fprintf(target_file, "PUSH R2\n");
			fprintf(target_file, "MOV R2, %d\n", 4096+r1-'a');
			fprintf(target_file, "PUSH R2\n");
			fprintf(target_file, "PUSH R2\n");
			fprintf(target_file, "PUSH R2\n");
			fprintf(target_file, "CALL 0\n");
			fprintf(target_file, "POP R0\n");
			fprintf(target_file, "POP R1\n");
			fprintf(target_file, "POP R1\n");
			fprintf(target_file, "POP R1\n");
			fprintf(target_file, "POP R1\n");
			break;
		case NODE_CONN:
			r1=codeGen(t->left);
			r2=codeGen(t->right);
			break;
		default:
			printf("Error\n");
			exit(1);
	}
	freeReg();
	return r1;
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

struct tnode* createTree(int val, int type, char *c, struct tnode *l, struct tnode *r){
	struct tnode *temp;
	temp=(struct tnode*)malloc(sizeof(struct tnode));
	temp->nodetype=type;
	switch(type){
		case NODE_VAR:
			temp->varname=malloc(sizeof(c));
			strcpy(temp->varname, c);
			temp->type=NODE_VAR;
			break;
		case NODE_NUM:
			temp->val=val;
			temp->type=NODE_NUM;
			break;
	}
	temp->left=l;
	temp->right=r;
}
