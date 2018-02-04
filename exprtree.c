int getReg(){
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

int codeGen(struct tnode *t){
	int r1, r2, r3, l1, l2;
	struct Lsymbol *Ltemp;
	struct Gsymbol *Gtemp;
	struct Paramstruct *Ptemp;
	struct Typetable *Ttemp;
	struct Fieldlist *Ftemp;
	struct tnode *temp;

	if(t==NULL)
		return r1;

	switch(t->nodetype){
		case NODE_NUM:
			r1=getReg();
			fprintf(target_file, "MOV R%d, %d\n", r1, t->value.intval);
			break;
		case NODE_STR:
			r1=getReg();
			fprintf(target_file, "MOV R%d, \"%s\"\n", r1, t->value.strval);
			break;
		case NODE_ID:
			r1=getReg();
			Ltemp=LLookup(t->name);
			Gtemp=GLookup(t->name);
			Ptemp=PLookup(t->name);
			if(Ltemp!=NULL){
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "ADD R%d, %d\n", r1, Ltemp->binding);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Ptemp!=NULL){
				Ptemp=Phead;
				r2=3;
				while(strcmp(Ptemp->name, t->name)){
					r2++;
					Ptemp=Ptemp->next;
				}
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "SUB R%d, %d\n", r1, r2);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Gtemp!=NULL)
				fprintf(target_file, "MOV R%d, [%d]\n", r1, Gtemp->binding);
			else{
				printf("Unknown variable: %s\n", t->name);
				exit(1);
			}
			break;
		case NODE_FIELD:
			r1=getReg();
			Ltemp=LLookup(t->ptr1->name);
			Gtemp=GLookup(t->ptr1->name);
			Ptemp=PLookup(t->ptr1->name);
			if(Ltemp!=NULL){
				Ttemp=Ltemp->type;
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "ADD R%d, %d\n", r1, Ltemp->binding);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Ptemp!=NULL){
				Ptemp=Phead;
				r2=3;
				while(strcmp(Ptemp->name, t->ptr1->name)){
					r2++;
					Ptemp=Ptemp->next;
				}
				Ttemp=Ptemp->type;
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "SUB R%d, %d\n", r1, r2);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Gtemp!=NULL){
				Ttemp=Gtemp->type;
				fprintf(target_file, "MOV R%d, [%d]\n", r1, Gtemp->binding);
			}
			else{
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			temp=t;
			while(temp!=NULL){
				Ftemp=FLookup(Ttemp, temp->ptr2->name);
				if(Ftemp==NULL){
					printf("Unknown identifier in FIELD: %s\n", temp->ptr2->name);
					exit(1);
				}
				fprintf(target_file, "ADD R%d, %d\n", r1, Ftemp->fieldIndex);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
				Ttemp=Ftemp->type;
				temp=temp->ptr3;
			}
			break;
		case NODE_ARRAY:
			Gtemp=GLookup(t->ptr1->name);
			if(Gtemp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "ADD R%d, %d\n", r1, Gtemp->binding);
			fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			break;
		case NODE_MATRIX:
			Gtemp=GLookup(t->ptr1->name);
			if(Gtemp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "MUL R%d, %d\n", r1, Gtemp->size1);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
			fprintf(target_file, "ADD R%d, %d\n", r1, Gtemp->binding);
			fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			freeReg();
			break;
		case NODE_PTR:
			r1=getReg();
			Ltemp=LLookup(t->ptr1->name);
			Gtemp=GLookup(t->ptr1->name);
			Ptemp=PLookup(t->ptr1->name);
			if(Ltemp!=NULL){
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "ADD R%d, %d\n", r1, Ltemp->binding);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Ptemp!=NULL){
				Ptemp=Phead;
				r3=3;
				while(strcmp(Ptemp->name, t->ptr1->name)){
					r3++;
					Ptemp=Ptemp->next;
				}
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "SUB R%d, %d\n", r1, r3);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Gtemp!=NULL){
				fprintf(target_file, "MOV R%d, [%d]\n", r1, Gtemp->binding);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else{
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			break;
		case NODE_FUNC:
			Gtemp=GLookup(t->ptr1->name);
			if(Gtemp==NULL){
				printf("Unknown function: %s\n", t->ptr1->name);
				exit(1);
			}

			r1=0;
			Ptemp=Gtemp->paramlist;
			while(Ptemp!=NULL){
				r1++;
				Ptemp=Ptemp->next;
			}

			r2=0;
			temp=t->ptr2;
			while(temp!=NULL){
				r2++;
				temp=temp->ptr2;
			}

			if(r1!=r2){
				printf("Incorrect no. of arguments: %s\n", t->ptr1->name);
				exit(1);
			}

			r1=0;
			r2--;
			Ptemp=Gtemp->paramlist;
			while(Ptemp!=NULL){
				r3=0;
				temp=t->ptr2;
				while(r3<r2){
					r3++;
					temp=temp->ptr2;
				}
				if(Ptemp->type!=temp->ptr1->type){
					printf("Incorrect paramter: %s\n", Ptemp->name);
					exit(1);
				}
				r2--;
				Ptemp=Ptemp->next;
			}

			for(r2=0;r2<=reg;r2++)
				fprintf(target_file, "PUSH R%d\n", r2);
			reg=-1;
			r1=codeGen(t->ptr2);
			r1=getReg();
			fprintf(target_file, "PUSH R%d\n", r1);
			fprintf(target_file, "CALL F%d\n", Gtemp->flabel);
			fprintf(target_file, "POP R%d\n", r1);
			freeReg();
			r3=0;
			r1=getReg();
			Ptemp=Gtemp->paramlist;
			while(Ptemp!=NULL){
				fprintf(target_file, "POP R%d\n", r1);
				r3++;
				Ptemp=Ptemp->next;
			}
			reg=r2;
			freeReg();
			for(r2--;r2>=0;r2--){
				fprintf(target_file, "POP R%d\n", r2);
				r3++;
			}
			r1=getReg();
			fprintf(target_file, "MOV R%d, SP\n", r1);
			fprintf(target_file, "ADD R%d, %d\n", r1, r3+1);
			fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			break;
		case NODE_ARG:
			r1=codeGen(t->ptr1);
			fprintf(target_file, "PUSH R%d\n", r1);
			freeReg();
			if(t->ptr2!=NULL)
				r1=codeGen(t->ptr2);
			break;
		case NODE_RET:
			r1=codeGen(t->ptr1);
			r2=getReg();
			fprintf(target_file, "MOV R%d, BP\n", r2);
			fprintf(target_file, "SUB R%d, 2\n", r2);
			fprintf(target_file, "MOV [R%d], R%d\n", r2, r1);
			freeReg();
			freeReg();
			break;
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
		case NODE_AND:
			l1=getLabel();
			r1=codeGen(t->ptr1);
			fprintf(target_file, "JZ R%d, L%d\n", r1, l1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "MOV R%d, R%d\n", r1, r2);
			fprintf(target_file, "L%d:\n", l1);
			freeReg();
			break;
		case NODE_OR:
			l1=getLabel();
			r1=codeGen(t->ptr1);
			fprintf(target_file, "JNZ R%d, L%d\n", r1, l1);
			r2=codeGen(t->ptr2);
			fprintf(target_file, "MOV R%d, R%d\n", r1, r2);
			fprintf(target_file, "L%d:\n", l1);
			freeReg();
			break;
		case NODE_NOT:
			l1=getLabel();
			l2=getLabel();
			r1=codeGen(t->ptr1);
			fprintf(target_file, "JZ R%d, L%d\n", r1, l1);
			fprintf(target_file, "MOV R%d, 0\n", r1);
			fprintf(target_file, "JMP L%d\n", l2);
			fprintf(target_file, "L%d:\n", l1);
			fprintf(target_file, "MOV R%d, 1\n", r1);
			fprintf(target_file, "L%d:\n", l2);
			freeReg();
			break;
		case NODE_NEG:
			r1=codeGen(t->ptr1);
			fprintf(target_file, "MUL R%d, -1\n", r1);
			break;
		case NODE_NULL:
			r1=getReg();
			fprintf(target_file, "MOV R%d, -1\n", r1);
			break;
		case NODE_ASSIGN:
			r1=codeGen(t->ptr2);
			r2=getReg();
			Ltemp=LLookup(t->ptr1->name);
			Gtemp=GLookup(t->ptr1->name);
			Ptemp=PLookup(t->ptr1->name);
			if(Ltemp!=NULL){
				fprintf(target_file, "MOV R%d, BP\n", r2);
				fprintf(target_file, "ADD R%d, %d\n", r2, Ltemp->binding);
				fprintf(target_file, "MOV [R%d], R%d\n", r2, r1);
			}
			else if(Ptemp!=NULL){
				Ptemp=Phead;
				r3=3;
				while(strcmp(Ptemp->name, t->ptr1->name)){
					r3++;
					Ptemp=Ptemp->next;
				}
				fprintf(target_file, "MOV R%d, BP\n", r2);
				fprintf(target_file, "SUB R%d, %d\n", r2, r3);
				fprintf(target_file, "MOV [R%d], R%d\n", r2, r1);
			}
			else if(Gtemp!=NULL)
				fprintf(target_file, "MOV [%d], R%d\n", Gtemp->binding, r1);
			else{
				printf("Unknown variable: %s\n", t->name);
				exit(1);
			}
			freeReg();
			freeReg();
			break;
		case NODE_ASSIGN_FIELD:
			r2=codeGen(t->ptr2);

			r1=getReg();
			Ltemp=LLookup(t->ptr1->ptr1->name);
			Gtemp=GLookup(t->ptr1->ptr1->name);
			Ptemp=PLookup(t->ptr1->ptr1->name);
			if(Ltemp!=NULL){
				Ttemp=Ltemp->type;
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "ADD R%d, %d\n", r1, Ltemp->binding);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Ptemp!=NULL){
				Ptemp=Phead;
				r3=3;
				while(strcmp(Ptemp->name, t->ptr1->ptr1->name)){
					r3++;
					Ptemp=Ptemp->next;
				}
				Ttemp=Ptemp->type;
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "SUB R%d, %d\n", r1, r3);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Gtemp!=NULL){
				Ttemp=Gtemp->type;
				fprintf(target_file, "MOV R%d, [%d]\n", r1, Gtemp->binding);
			}
			else{
				printf("Unknown variable: %s\n", t->ptr1->ptr1->name);
				exit(1);
			}
			temp=t->ptr1;
			while(temp->ptr3!=NULL){
				Ftemp=FLookup(Ttemp, temp->ptr2->name);
				if(Ftemp==NULL){
					printf("Unknown identifier in FIELD: %s\n", temp->ptr2->name);
					exit(1);
				}
				fprintf(target_file, "ADD R%d, %d\n", r1, Ftemp->fieldIndex);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
				Ttemp=Ftemp->type;
				temp=temp->ptr3;
			}
			Ftemp=FLookup(Ttemp, temp->ptr2->name);
			if(Ftemp==NULL){
				printf("Unknown identifier in FIELD: %s\n", temp->ptr2->name);
				exit(1);
			}
			fprintf(target_file, "ADD R%d, %d\n", r1, Ftemp->fieldIndex);
			fprintf(target_file, "MOV [R%d], R%d\n", r1, r2);
			freeReg();
			freeReg();
			break;
		case NODE_ASSIGN_ARRAY:
			Gtemp=GLookup(t->ptr1->name);
			if(Gtemp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "ADD R%d, %d\n", r1, Gtemp->binding);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "MOV [R%d], R%d\n", r1, r2);
			freeReg();
			freeReg();
			break;
		case NODE_ASSIGN_MATRIX:
			Gtemp=GLookup(t->ptr1->name);
			if(Gtemp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			r1=codeGen(t->ptr2->ptr1);
			fprintf(target_file, "MUL R%d, %d\n", r1, Gtemp->size1);
			r2=codeGen(t->ptr2->ptr2);
			fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
			freeReg();
			fprintf(target_file, "ADD R%d, %d\n", r1, Gtemp->binding);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "MOV [R%d], R%d\n", r1, r2);
			freeReg();
			freeReg();
			break;
		case NODE_ASSIGN_PTR:
			r1=codeGen(t->ptr2);
			r2=getReg();
			Ltemp=LLookup(t->ptr1->name);
			Gtemp=GLookup(t->ptr1->name);
			Ptemp=PLookup(t->ptr1->name);
			if(Ltemp!=NULL){
				fprintf(target_file, "MOV R%d, BP\n", r2);
				fprintf(target_file, "ADD R%d, %d\n", r2, Ltemp->binding);
				fprintf(target_file, "MOV R%d, [R%d]\n", r2, r2);
				fprintf(target_file, "MOV [R%d], R%d\n", r2, r1);
			}
			else if(Ptemp!=NULL){
				Ptemp=Phead;
				r3=3;
				while(strcmp(Ptemp->name, t->ptr1->name)){
					r3++;
					Ptemp=Ptemp->next;
				}
				fprintf(target_file, "MOV R%d, BP\n", r2);
				fprintf(target_file, "SUB R%d, %d\n", r2, r3);
				fprintf(target_file, "MOV R%d, [R%d]\n", r2, r2);
				fprintf(target_file, "MOV [R%d], R%d\n", r2, r1);
			}
			else if(Gtemp!=NULL){
				fprintf(target_file, "MOV R%d, [%d]\n", r2, Gtemp->binding);
				fprintf(target_file, "MOV [R%d], R%d\n", r2, r1);
			}
			else{
				printf("Unknown variable: %s\n", t->name);
				exit(1);
			}
			freeReg();
			freeReg();
			break;
		case NODE_REF:
			r1=getReg();
			Ltemp=LLookup(t->ptr1->name);
			Gtemp=GLookup(t->ptr1->name);
			Ptemp=PLookup(t->ptr1->name);
			if(Ltemp!=NULL){
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "ADD R%d, %d\n", r1, Ltemp->binding);
			}
			else if(Ptemp!=NULL){
				Ptemp=Phead;
				r3=3;
				while(strcmp(Ptemp->name, t->ptr1->name)){
					r3++;
					Ptemp=Ptemp->next;
				}
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "SUB R%d, %d\n", r1, r3);
			}
			else if(Gtemp!=NULL)
				fprintf(target_file, "MOV R%d, %d\n", r1, Gtemp->binding);
			else{
				printf("Unknown variable: %s\n", t->name);
				exit(1);
			}
			break;
		case NODE_REF_ARRAY:
			Gtemp=GLookup(t->ptr1->name);
			if(Gtemp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			if(Gtemp->nodetype==NODE_MATRIX)
				fprintf(target_file, "MUL R%d, %d\n", r1, Gtemp->size1);
			fprintf(target_file, "ADD R%d, %d\n", r1, Gtemp->binding);
			break;
		case NODE_REF_MATRIX:
			Gtemp=GLookup(t->ptr1->name);
			if(Gtemp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "MUL R%d, %d\n", r1, Gtemp->size1);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
			freeReg();
			fprintf(target_file, "ADD R%d, %d\n", r1, Gtemp->binding);
		case NODE_INIT:
			r1=getReg();
			fprintf(target_file, "MOV R%d, \"Heapset\"\n", r1);
			fprintf(target_file, "PUSH R%d\n", r1);
			fprintf(target_file, "PUSH R%d\n", r1);
			fprintf(target_file, "PUSH R%d\n", r1);
			fprintf(target_file, "PUSH R%d\n", r1);
			fprintf(target_file, "PUSH R%d\n", r1);
			fprintf(target_file, "CALL 0\n");
			fprintf(target_file, "POP R%d\n", r1);
			fprintf(target_file, "POP R%d\n", r1);
			fprintf(target_file, "POP R%d\n", r1);
			fprintf(target_file, "POP R%d\n", r1);
			fprintf(target_file, "POP R%d\n", r1);
			fprintf(target_file, "MOV R%d, 0\n", r1);
			break;
		case NODE_ALLOC:
			r1=getReg();
			r2=getReg();
			fprintf(target_file, "MOV R%d, \"Alloc\"\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "MOV R%d, 8\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "CALL 0\n");
			fprintf(target_file, "POP R%d\n", r1);
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			fprintf(target_file, "POP R%d\n", r2);
			freeReg();
			break;
		case NODE_FREE:
			r1=codeGen(t->ptr1);
			r2=getReg();
			fprintf(target_file, "MOV R%d, \"Free\"\n", r2);
			fprintf(target_file, "PUSH R%d\n", r2);
			fprintf(target_file, "PUSH R%d\n", r1);
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
			r1=getReg();
			r2=getReg();
			Ltemp=LLookup(t->ptr1->name);
			Gtemp=GLookup(t->ptr1->name);
			Ptemp=PLookup(t->ptr1->name);
			if(Ltemp!=NULL){
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "ADD R%d, %d\n", r1, Ltemp->binding);
			}
			else if(Ptemp!=NULL){
				Ptemp=Phead;
				r3=3;
				while(strcmp(Ptemp->name, t->ptr1->name)){
					r3++;
					Ptemp=Ptemp->next;
				}
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "SUB R%d, %d\n", r1, r3);
			}
			else if(Gtemp!=NULL)
				fprintf(target_file, "MOV R%d, %d\n", r1, Gtemp->binding);
			else{
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
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
			break;
		case NODE_READ_ARRAY:
			Gtemp=GLookup(t->ptr1->name);
			if(Gtemp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "ADD R%d, %d\n", r1, Gtemp->binding);
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
			Gtemp=GLookup(t->ptr1->name);
			if(Gtemp==NULL){
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
			r1=codeGen(t->ptr2);
			fprintf(target_file, "MUL R%d, %d\n", r1, Gtemp->size1);
			r2=codeGen(t->ptr3);
			fprintf(target_file, "ADD R%d, R%d\n", r1, r2);
			fprintf(target_file, "ADD R%d, %d\n", r1, Gtemp->binding);
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
			r1=getReg();
			r2=getReg();
			Ltemp=LLookup(t->ptr1->name);
			Gtemp=GLookup(t->ptr1->name);
			Ptemp=PLookup(t->ptr1->name);
			if(Ltemp!=NULL){
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "ADD R%d, %d\n", r1, Ltemp->binding);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Ptemp!=NULL){
				Ptemp=Phead;
				r3=3;
				while(strcmp(Ptemp->name, t->ptr1->name)){
					r3++;
					Ptemp=Ptemp->next;
				}
				fprintf(target_file, "MOV R%d, BP\n", r1);
				fprintf(target_file, "SUB R%d, %d\n", r1, r3);
				fprintf(target_file, "MOV R%d, [R%d]\n", r1, r1);
			}
			else if(Gtemp!=NULL)
				fprintf(target_file, "MOV R%d, [%d]\n", r1, Gtemp->binding);
			else{
				printf("Unknown variable: %s\n", t->ptr1->name);
				exit(1);
			}
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

void typeCheck(struct Typetable *type1, struct Typetable *type2, int nodetype){
	switch(nodetype){
		case NODE_ASSIGN:
			if(type2==TLookup("type") && (type1==TLookup("integer") || type1==TLookup("string"))){
				printf("Field Assignment Type Mismatch\n");
				exit(1);
			}
			else if(type2!=TLookup("type") && type1!=type2){
				printf("Assignment Type Mismatch\n");
				exit(1);
			}
			break;
		case NODE_PLUS:
		case NODE_MINUS:
		case NODE_MUL:
		case NODE_DIV:
		case NODE_MOD:
			if((type1!=TLookup("integer"))||(type2!=TLookup("integer"))){
				printf("Arithmetic Operator Type Mismatch\n");
				exit(1);
			}
			break;
		case NODE_LT:
		case NODE_GT:
		case NODE_LE:
		case NODE_GE:
		case NODE_NE:
		case NODE_EQ:
			if(type2==TLookup("type") && (type1==TLookup("integer") || type1==TLookup("string"))){
				printf("Field Relational Operator Type Mismatch\n");
				exit(1);
			}
			if(type2!=TLookup("type") && ((type1!=type2)
				||((type1!=TLookup("integer"))&&(type1!=TLookup("string")))
				||((type2!=TLookup("integer"))&&(type2!=TLookup("string"))))){
				printf("Relational Operator Type Mismatch\n");
				exit(1);
			}
			break;
		case NODE_AND:
		case NODE_OR:
		case NODE_NOT:
			if(((type1!=TLookup("integer"))&&(type1!=TLookup("boolean")))
				||((type2!=TLookup("integer"))&&(type2!=TLookup("boolean")))){
				printf("Logical Operator Type Mismatch\n");
				exit(1);
			}
			break;
		case NODE_ARRAY:
			if(type1!=TLookup("integer")){
				printf("Array Type Mismatch\n");
				exit(1);
			}
			break;
		case NODE_MATRIX:
			if((type1!=TLookup("integer"))||(type2!=TLookup("integer"))){
				printf("Matrix Type Mismatch\n");
				exit(1);
			}
			break;
	}
}

void idCheck(struct tnode *t, int nodetype){
	int inodetype;
	struct Lsymbol *Ltemp=LLookup(t->name);
	struct Gsymbol *Gtemp=GLookup(t->name);
	struct Paramstruct *Ptemp=PLookup(t->name);
	
	if(Ltemp!=NULL)
		inodetype=Ltemp->nodetype;
	else if(Ptemp!=NULL)
		inodetype=Ptemp->nodetype;
	else if(Gtemp!=NULL)
		inodetype=Gtemp->nodetype;
	else{
		printf("Unknown variable\n");
		exit(1);
	}

	if(nodetype==NODE_REF_ARRAY){
		if((inodetype!=NODE_ARRAY)&&(inodetype!=NODE_MATRIX)){
			printf("Incorrect identifier\n");
			exit(1);
		}
	}
	else if(nodetype==NODE_REF_MATRIX){
		if(inodetype!=NODE_MATRIX){
			printf("Incorrect identifier\n");
			exit(1);
		}
	}
	else if(nodetype==NODE_ID){
		if((inodetype!=NODE_ID)&&(inodetype!=NODE_PTR)){
			printf("Incorrect identifier\n");
			exit(1);
		}
	}
	else if(inodetype!=nodetype){
		printf("Incorrect identifier\n");
		exit(1);
	}
}

void evaluate(){
	int i, r1, r2, r3, l1, l2;
	fprintf(target_file, "0\n2056\n0\n0\n0\n0\n0\n0\n");
	fprintf(target_file, "MOV SP, %d\n", binding-1);
	fprintf(target_file, "MOV BP, %d\n", binding);
	fprintf(target_file, "PUSH R0\n");
	fprintf(target_file, "CALL MAIN\n");
	fprintf(target_file, "INT 10\n");
}

struct tnode* createTree(struct Typetable *type, int nodetype, char *name, union Constant *value, struct tnode *arglist, struct tnode *ptr1, struct tnode *ptr2, struct tnode *ptr3){
	struct tnode *temp;
	struct Lsymbol *Ltemp;
	struct Gsymbol *Gtemp;
	struct Paramstruct *Ptemp;
	temp=(struct tnode*)malloc(sizeof(struct tnode));
	temp->type=type;
	temp->nodetype=nodetype;
	temp->arglist=arglist;
	
	switch(nodetype){
		case NODE_NUM:
			temp->value.intval=value->intval;
			break;
		case NODE_STR:
			temp->value.strval=malloc(sizeof(name));
			strcpy(temp->value.strval, name);
			break;
		case NODE_ID:
			temp->name=malloc(sizeof(name));
			strcpy(temp->name, name);
			Ltemp=LLookup(temp->name);
			Gtemp=GLookup(temp->name);
			Ptemp=PLookup(temp->name);
			if(Ltemp!=NULL){
				temp->type=Ltemp->type;
				if(Ltemp->nodetype==NODE_PTR)
					temp->type=TLookup("integer");
			}
			else if(Ptemp!=NULL){
				temp->type=Ptemp->type;
				if(Ptemp->nodetype==NODE_PTR)
					temp->type=TLookup("integer");
			}
			else if(Gtemp!=NULL){
				temp->type=Gtemp->type;
				if(Gtemp->nodetype==NODE_PTR)
					temp->type=TLookup("integer");
			}
			temp->Lentry=Ltemp;
			temp->Gentry=Gtemp;
			break;
		case NODE_ARRAY:
		case NODE_MATRIX:
		case NODE_PTR:
			Ltemp=LLookup(ptr1->name);
			Gtemp=GLookup(ptr1->name);
			Ptemp=PLookup(ptr1->name);
			if(Ltemp!=NULL)
				temp->type=Ltemp->type;
			else if(Ptemp!=NULL)
				temp->type=Ptemp->type;
			else if(Gtemp!=NULL)
				temp->type=Gtemp->type;
			else{
				printf("Unknown identifier: %s\n", ptr1->name);
				exit(1);
			}
			temp->Lentry=Ltemp;
			temp->Gentry=Gtemp;
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

struct Gsymbol* GLookup(char *name){
	struct Gsymbol *temp=Ghead;
	while(temp!=NULL){
		if(!strcmp(temp->name, name))
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void GInstall(char *name, struct Typetable *type, int size1, int size2, int nodetype, struct Paramstruct *paramlist){
	struct Gsymbol *temp;
	temp=GLookup(name);
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
	temp->paramlist=paramlist;
	temp->next=NULL;

	if(nodetype=NODE_FUNC)
		temp->flabel=flabel++;

	if((binding+(temp->size1*temp->size2))>=5120){
		printf("Static Area Overflow\n");
		exit(1);
	}
	temp->binding=binding;
	binding+=temp->size1*temp->size2;

	if(Ghead==NULL)
		Ghead=Gtail=temp;
	else{
		Gtail->next=temp;
		Gtail=temp;
	}
}

struct Lsymbol* LLookup(char *name){
	struct Lsymbol *temp=Lhead;
	while(temp!=NULL){
		if(!strcmp(temp->name, name))
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void LInstall(char *name, struct Typetable *type, int nodetype){
	struct Lsymbol *temp;
	temp=LLookup(name);
	if(temp!=NULL){
		printf("Multiple declaration : %s\n", name);
		exit(1);
	}

	temp=(struct Lsymbol*)malloc(sizeof(struct Lsymbol));
	temp->name=malloc(sizeof(name));
	strcpy(temp->name, name);
	temp->type=type;
	temp->nodetype=nodetype;
	temp->binding=binding++;
	temp->next=NULL;

	if(Lhead==NULL)
		Lhead=Ltail=temp;
	else{
		Ltail->next=temp;
		Ltail=temp;
	}
}

struct Paramstruct* PLookup(char *name){
	struct Paramstruct *temp=Phead;
	while(temp!=NULL){
		if(!strcmp(temp->name, name))
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void PInstall(char *name, struct Typetable *type, int nodetype){
	struct Paramstruct *temp;
	temp=PLookup(name);
	if(temp!=NULL){
		printf("Multiple declaration : %s\n", name);
		exit(1);
	}

	temp=(struct Paramstruct*)malloc(sizeof(struct Paramstruct));
	temp->name=malloc(sizeof(name));
	strcpy(temp->name, name);
	temp->type=type;
	temp->nodetype=nodetype;
	temp->next=NULL;

	if(Phead==NULL)
		Phead=Ptail=temp;
	else{
		Ptail->next=temp;
		Ptail=temp;
	}
}

void TypeTableCreate(){
	TInstall("integer", 1, NULL);
	TInstall("string", 1, NULL);
	TInstall("boolean", 1, NULL);
	TInstall("void", 0, NULL);
	TInstall("type", 0, NULL);
}

struct Typetable *TLookup(char *name){
	struct Typetable *temp=Thead;
	while(temp!=NULL){
		if(!strcmp(temp->name, name))
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void TInstall(char *name, int size, Fieldlist *fields){
	struct Typetable *temp;
	struct Fieldlist *Ftemp;

	temp=TLookup(name);
	if(temp!=NULL){
		printf("Multiple declaration : %s\n", name);
		exit(1);
	}

	temp=(struct Typetable*)malloc(sizeof(struct Typetable));
	temp->name=malloc(sizeof(name));
	strcpy(temp->name, name);
	temp->size=size;
	temp->next=NULL;

	if(Thead==NULL)
		Thead=Ttail=temp;
	else{
		Ttail->next=temp;
		Ttail=temp;
	}

	Ftemp=fields;
	count=0;
	while(Ftemp!=NULL){
		if(Ftemp->type==TLookup("type"))
			Ftemp->type=TLookup(name);
		Ftemp->fieldIndex=count;
		count++;
		Ftemp=Ftemp->next;
	}

	if(count>8){
		printf("Type size exceeded: %s\n", name);
		exit(1);
	}

	temp->fields=fields;
	if(fields!=NULL)
		temp->size=count;
}

struct Fieldlist* FLookup(struct Typetable *type, char *name){
	struct Fieldlist *temp=type->fields;
	while(temp!=NULL){
		if(!strcmp(temp->name, name))
			return temp;
		temp=temp->next;
	}
	return NULL;
}

void FInstall(struct Typetable *type, char *name){
	struct Fieldlist *temp;
	temp=FLookup(type, name);
	if(temp!=NULL){
		printf("Multiple declaration: %s\n", name);
		exit(1);
	}
	temp=(struct Fieldlist*)malloc(sizeof(struct Fieldlist));
	temp->name=malloc(sizeof(name));
	strcpy(temp->name, name);
	temp->type=type;
	temp->next=NULL;

	if(Fhead==NULL)
		Fhead=Ftail=temp;
	else{
		Ftail->next=temp;
		Ftail=temp;
	}
}

int getSize(struct Typetable *type){
	if(type==NULL)
		return -1;
	return type->size; 
}
