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
	struct Gsymbol *temp;
	switch(t->nodetype){
		case NODE_NUM:
			r1=getReg();
			fprintf(target_file, "MOV R%d, %d\n", r1, t->val);
			return r1;
		case NODE_STR:
			r1=getReg();
			fprintf(target_file, "MOV R%d, \"%s\"\n", r1, t->varname);
			return r1;
		case NODE_ID:
			r1=getReg();
			temp=Lookup(t->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->varname);
				exit(1);
			}
			fprintf(target_file, "MOV R%d, [%d]\n", r1, temp->binding);
			return r1;
		case NODE_ARRAY:
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "ADD R%d, %d\n", r1, temp->binding);
			fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			return r1;
		case NODE_MATRIX:
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "MUL R%d, %d\n", r1, temp->size1);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
			fprintf(target_file, "ADD R%d, %d\n", r1, temp->binding);
			fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			freeReg();
			return r1;
		case NODE_PTR:
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r1=getReg();
			fprintf(target_file, "MOV R%d, [%d]\n", r1, temp->binding);
			fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
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
		case NODE_MOD:
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "MOD R%d, R%d\n", r1, r2);
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
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			fprintf(target_file, "MOV [%d], R%d\n", temp->binding, r1);
			freeReg();
			break;
		case NODE_ASSIGN_ARRAY:
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "ADD R%d, %d\n", r1, temp->binding);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "MOV [R%d], R%d\n", r1, r2);
			freeReg();
			freeReg();
			break;
		case NODE_ASSIGN_MATRIX:
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r1=codeGen(t->ptr2->ptr1);
			fprintf(target_file, "MUL R%d, %d\n", r1, temp->size1);
			r2=codeGen(t->ptr2->ptr2);
			fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
			freeReg();
			fprintf(target_file, "ADD R%d, %d\n", r1, temp->binding);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "MOV [R%d], R%d\n", r1, r2);
			freeReg();
			freeReg();
			break;
		case NODE_ASSIGN_PTR:
			temp=Lookup(t->ptr2->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr2->varname);
				exit(1);
			}
			r1=getReg();
			fprintf(target_file, "MOV R%d, %d\n", r1, temp->binding);
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			fprintf(target_file, "MOV [%d], R%d\n", temp->binding, r1);
			freeReg();
			break;
		case NODE_ASSIGN_PTR2:
			r1=codeGen(t->ptr2);
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r2=getReg();
			fprintf(target_file, "MOV R%d, [%d]\n", r2, temp->binding);
			fprintf(target_file, "MOV [R%d], R%d\n", r2, r1);
			freeReg();
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
		case NODE_DO_WHILE:
			l1=getLabel();
			l2=getLabel();
			insLoop(l2, l1);
			fprintf(target_file, "L%d:\n", l1);
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "JNZ R%d, L%d\n", r2, l1);
			freeReg();
			fprintf(target_file, "L%d:\n", l2);
			delLoop();
			break;
		case NODE_REPEAT:
			l1=getLabel();
			l2=getLabel();
			insLoop(l2, l1);
			fprintf(target_file, "L%d:\n", l1);
			r1=codeGen(t->ptr1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "JZ R%d, L%d\n", r2, l1);
			freeReg();
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
		case NODE_BRKP:
			fprintf(target_file, "BRKP\n");
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
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r2=getReg();
			fprintf(target_file, "MOV R%d, \"Read\"\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, -1\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, %d\n", r2, temp->binding);
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
			break;
		case NODE_READ_ARRAY:
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "ADD R%d, %d\n", r1, temp->binding);
			r2=getReg();
			fprintf(target_file, "MOV R%d, \"Read\"\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, -1\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, R%d\n", r2, r1);
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
		case NODE_READ_MATRIX:
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "MUL R%d, %d\n", r1, temp->size1);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
			fprintf(target_file, "ADD R%d, %d\n", r1, temp->binding);
			fprintf(target_file, "MOV R%d, \"Read\"\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, -1\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, R%d\n", r2, r1);
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
		case NODE_READ_PTR:
			temp=Lookup(t->ptr1->varname);
			if(temp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->varname);
				exit(1);
			}
			r1=getReg();
			fprintf(target_file, "MOV R%d, [%d]\n", r1, temp->binding);
			r2=getReg();
			fprintf(target_file, "MOV R%d, \"Read\"\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, -1\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, R%d\n", r2, r1);
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

void typeCheck(int type1, int type2, int nodetype){
	switch(nodetype){
		case NODE_ASSIGN:
			if(type1!=type2){
				printf("Type Mismatch\n");
				exit(1);
			}
			break;
		case NODE_PLUS:
		case NODE_MINUS:
		case NODE_MUL:
		case NODE_DIV:
		case NODE_MOD:
			if((type1!=inttype)||(type2!=inttype)){
				printf("Type Mismatch\n");
				exit(1);
			}
			break;
		case NODE_LT:
		case NODE_GT:
		case NODE_LE:
		case NODE_GE:
		case NODE_NE:
		case NODE_EQ:
			if((type1!=type2)||((type1!=inttype)&&(type1!=strtype))||((type2!=inttype)&&(type2!=strtype))){
				printf("Type Mismatch\n");
				exit(1);
			}
			break;
		case NODE_ARRAY:
			if(type1!=inttype){
				printf("Type Mismatch\n");
				exit(1);
			}
			break;
		case NODE_MATRIX:
			if((type1!=inttype)||(type2!=inttype)){
				printf("Type Mismatch\n");
				exit(1);
			}
			break;
	}
}

void idCheck(struct Gsymbol *Gentry, int nodetype){
	if(Gentry==NULL){
		printf("Unknown variable\n");
		exit(1);
	}
	if(Gentry->nodetype!=nodetype){
		printf("Incorrect identifier\n");
		exit(1);
	}
}

void print(struct tnode *t){
	int i;
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
	fprintf(target_file, "MOV SP, 4095\n");
	for(int i=4096;i<bind;i++)
		fprintf(target_file, "PUSH R0\n");
	if(t!=NULL)
		reg=codeGen(t);
	fprintf(target_file, "INT 10\n");
}

struct tnode* createTree(int val, int type, char *varname, int nodetype, struct tnode *ptr1, struct tnode *ptr2, struct tnode *ptr3){
	struct tnode *temp;
	struct Gsymbol *t;
	temp=(struct tnode*)malloc(sizeof(struct tnode));
	temp->val=val;
	temp->type=type;
	temp->nodetype=nodetype;
	switch(nodetype){
		case NODE_NUM:
			temp->type=inttype;
			break;
		case NODE_STR:
			temp->type=strtype;
			temp->varname=malloc(sizeof(varname));
			strcpy(temp->varname, varname);
			break;
		case NODE_ID:
			temp->varname=malloc(sizeof(varname));
			strcpy(temp->varname, varname);
			t=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
			t=Lookup(temp->varname);
			if(t!=NULL){
				temp->type=t->type;
			}
			temp->Gentry=t;
			break;
		case NODE_ARRAY:
			t=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
			t=Lookup(ptr1->varname);
			if(t!=NULL){
				temp->type=t->type;
			}
			temp->Gentry=t;
			break;
		case NODE_MATRIX:
			t=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
			t=Lookup(ptr1->varname);
			if(t!=NULL){
				temp->type=t->type;
			}
			temp->Gentry=t;
			break;
		case NODE_PTR:
			t=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
			t=Lookup(ptr1->varname);
			if(t!=NULL){
				temp->type=t->type;
			}
			temp->Gentry=t;
			break;
	}
	temp->ptr1=ptr1;
	temp->ptr2=ptr2;
	temp->ptr3=ptr3;
	return temp;
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

struct Gsymbol* Lookup(char *name){
	struct Gsymbol *temp=Ghead;
	while(temp!=NULL){
		if(!strcmp(temp->name, name))
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void Install(char *name, int type, int size1, int size2, int nodetype){
	struct Gsymbol *temp;
	temp=Lookup(name);
	if(temp!=NULL){
		printf("Multiple declaration : %s\n", name);
		exit(1);
	}

	temp=(struct Gsymbol*)malloc(sizeof(struct Gsymbol));
	temp->name=malloc(sizeof(name));
	strcpy(temp->name, name);
	temp->type=type;
	temp->size1=size1;
	temp->size2=size2;
	temp->nodetype=nodetype;

	if((bind+(temp->size1*temp->size2))>=5120){
		printf("Static Area Overflow\n");
		exit(1);
	}
	temp->binding=bind;
	bind+=temp->size1*temp->size2;

	if(Ghead==NULL)
		Ghead=Gtail=temp;
	else{
		Gtail->next=temp;
		Gtail=temp;
	}
}
