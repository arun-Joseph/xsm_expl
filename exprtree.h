#define NODE_ID 0
#define NODE_NUM 1
#define NODE_STR 2
#define NODE_ARRAY 3
#define NODE_MATRIX 4
#define NODE_PTR 5

#define NODE_LT 10
#define NODE_GT 11
#define NODE_LE 12
#define NODE_GE 13
#define NODE_NE 14
#define NODE_EQ 15
#define NODE_ASSIGN 16
#define NODE_ASSIGN_ARRAY 17
#define NODE_ASSIGN_MATRIX 18
#define NODE_ASSIGN_PTR 19
#define NODE_ASSIGN_PTR2 20

#define NODE_PLUS 21
#define NODE_MINUS 22
#define NODE_MUL 23
#define NODE_DIV 24
#define NODE_MOD 25

#define NODE_IF 31
#define NODE_ELIF 32
#define NODE_WHILE 33
#define NODE_DO_WHILE 34
#define NODE_REPEAT 35
#define NODE_BREAK 36
#define NODE_CONTINUE 37

#define NODE_WRITE 41
#define NODE_READ 42
#define NODE_READ_ARRAY 43
#define NODE_READ_MATRIX 44
#define NODE_READ_PTR 45

#define NODE_CONN 50
#define NODE_BRKP 51

#define reg_index int

#define inttype 100
#define strtype 101
#define booltype 102

typedef struct tnode{
	int val;
	int type;
	char *varname;
	int nodetype;
	struct Gsymbol *Gentry;
	struct tnode *ptr1,*ptr2,*ptr3;
}tnode;

typedef struct loop{
	int br;
	int cn;
	struct loop *next;
}loop;

typedef struct Gsymbol{
	char *name;
	int type;
	int size1, size2;
	int binding;
	int nodetype;
	struct Gsymbol *next;
}Gsymbol;

int reg, label, declType, bind;
FILE *target_file, *fp;
struct loop *lHead;
struct Gsymbol *Ghead, *Gtail;

reg_index codeGen(struct tnode *t);
reg_index getReg(void);
void freeReg(void);
int getLabel(void);
void typeCheck(int type1, int type2, int nodetype);
void idCheck(struct Gsymbol *Gentry, int nodetype);
void print(struct tnode *t);
struct tnode* createTree(int val, int type, char *varname, int nodetype, struct tnode *ptr1, struct tnode *ptr2, struct tnode *ptr3);

void insLoop(int br, int cn);
void delLoop(void);

struct Gsymbol* Lookup(char *name);
void Install(char *name, int type, int size1, int size2, int nodetype);
