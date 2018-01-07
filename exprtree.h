#define NODE_VAR 0
#define NODE_NUM 1

#define NODE_ASSIGN 2

#define NODE_WRITE 3
#define NODE_READ 4

#define NODE_PLUS 5
#define NODE_MINUS 6
#define NODE_MUL 7
#define NODE_DIV 8

#define NODE_LT 10
#define NODE_GT 11
#define NODE_LE 12
#define NODE_GE 13
#define NODE_NE 14
#define NODE_EQ 15

#define NODE_IF 31
#define NODE_ELIF 32
#define NODE_WHILE 33
#define NODE_BREAK 34
#define NODE_CONTINUE 35

#define NODE_CONN 50

#define inttype 100
#define strtype 101
#define booltype 102

typedef struct tnode{
	int val;
	int type;
	char *varname;
	int nodetype;
	struct tnode *ptr1,*ptr2,*ptr3;
}tnode;

typedef struct loop{
	int br;
	int cn;
	struct loop *next;
}loop;

int reg, label;
FILE *target_file, *fp;
struct loop *lHead;

reg_index codeGen(struct tnode *t);
reg_index getReg(void);
void freeReg(void);
int getLabel(void);
void typeCheck(int type1, int type2);
void print(struct tnode *t);
struct tnode* createTree(int val, int type, char *varname, int nodetype, struct tnode *ptr1, struct tnode *ptr2, struct tnode *ptr3);
void insLoop(int br, int cn);
void delLoop(void);
