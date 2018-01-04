#define NODE_VAR 0
#define NODE_NUM 1

#define NODE_ASSIGN 2

#define NODE_WRITE 3
#define NODE_READ 4

#define NODE_PLUS 5
#define NODE_MINUS 6
#define NODE_MUL 7
#define NODE_DIV 8

#define NODE_CONN 10

typedef struct tnode{
	int val;
	int type;
	char *varname;
	int nodetype;
	struct tnode *left,*right;
}tnode;

int reg;
FILE *target_file, *fp;

reg_index codeGen(struct tnode *t);
reg_index getReg(void);
void freeReg(void);
void print(struct tnode *t);
struct tnode* createTree(int val, int type, char *c, struct tnode *l, struct tnode *r);
