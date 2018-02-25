#define NODE_ID 0
#define NODE_NUM 1
#define NODE_STR 2
#define NODE_ARRAY 3
#define NODE_MATRIX 4
#define NODE_PTR 5
#define NODE_REF 6
#define NODE_REF_ARRAY 7
#define NODE_REF_MATRIX 8

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

#define NODE_PLUS 21
#define NODE_MINUS 22
#define NODE_MUL 23
#define NODE_DIV 24
#define NODE_MOD 25
#define NODE_AND 26
#define NODE_OR 27
#define NODE_NOT 28
#define NODE_NEG 29

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
#define NODE_READ_TYPE 46 

#define NODE_FUNC 51
#define NODE_RET 52
#define NODE_ARG 53
#define NODE_FIELD 54

#define NODE_INIT 61
#define NODE_ALLOC 62
#define NODE_FREE 63
#define NODE_NULL 64
#define NODE_ASSIGN_FIELD 65

#define NODE_NEW 71
#define NODE_DELETE 72
#define NODE_CLASS 73
#define NODE_FUNC_CLASS 74
#define NODE_FUNC_CLASS2 75
#define NODE_FUNC_CLASS3 76

#define NODE_CONN 80
#define NODE_BRKP 81
#define NODE_TYPE 82

union Constant{
	int intval;
	char *strval;
};

typedef struct tnode{
	struct Typetable *type;
	int nodetype;
	char *name;
	union Constant value;
	struct Gsymbol *Gentry;
	struct Lsymbol *Lentry;
	struct tnode *arglist;
	struct tnode *ptr1,*ptr2,*ptr3;
}tnode;

typedef struct loop{
	int br;
	int cn;
	struct loop *next;
}loop;

typedef struct Gsymbol{
	char *name;
	struct Typetable *type;
	struct Classtable *cptr;
	int size1, size2;
	int binding;
	int nodetype;
	int flabel;
	struct Paramstruct *paramlist;
	struct Gsymbol *next;
}Gsymbol;

typedef struct Lsymbol{
	char *name;
	struct Typetable *type;
	int binding;
	int nodetype;
	struct Lsymbol *next;
}Lsymbol;

typedef struct Paramstruct{
	char *name;
	struct Typetable *type;
	int binding;
	int nodetype;
	struct Paramstruct *next;
}Paramstruct;

typedef struct Typetable{
	char *name;
	int size;
	struct Fieldlist *fields;
	struct Typetable *next;
}Typetable;

typedef struct Fieldlist{
	char *name;
	int fieldIndex;
	struct Typetable *type;
	struct Classtable *Ctype;
	struct Fieldlist *next;
}Fieldlist;

typedef struct Classtable{
	char *name;
	struct Fieldlist *Memberfield;
	struct Memberfunclist *Vfuncptr;
	struct Classtable *Parentptr;
	int Class_index;
	int Fieldcount;
	int Methodcount;
	struct Classtable *next;
}Classtable;

typedef struct Memberfunclist{
	char *name;
	struct Typetable *type;
	struct Paramstruct *paramlist;
	int Funcposition;
	int flabel;
	struct Memberfunclist *next;
}Memberfunclist;

int reg=-1, label=-1;
struct Typetable *declType=NULL, *PdeclType=NULL, *functype=NULL;
struct Classtable *classType=NULL, *declClass=NULL;
int binding=4096, lbind=1, flabel=0, lcount=0, count=0, clabel=0, start=0;
FILE *target_file, *fp;
struct loop *lHead=NULL;
struct tnode *tptr=NULL, *tptr1=NULL;
struct Gsymbol *Ghead=NULL, *Gtail=NULL;
struct Lsymbol *Lhead=NULL, *Ltail=NULL;
struct Paramstruct *Phead=NULL, *Ptail=NULL;
struct Typetable *Thead=NULL, *Ttail=NULL;
struct Fieldlist *Fhead=NULL, *Ftail=NULL;
struct Classtable *Chead=NULL, *Ctail=NULL;
struct Memberfunclist *Mhead=NULL, *Mtail=NULL;

int codeGen(struct tnode *t);
int getReg(void);
void freeReg(void);
int getLabel(void);
void typeCheck(struct Typetable *type1, struct Typetable *type2, int nodetype);
void idCheck(struct tnode *t, int nodetype);
void print(struct tnode *t);
struct tnode* createTree(struct Typetable *type, int nodetype, char *name, union Constant *value, struct tnode *arglist, struct tnode *ptr1, struct tnode *ptr2, struct tnode *ptr3);

void insLoop(int br, int cn);
void delLoop(void);

struct Gsymbol* GLookup(char *name);
void GInstall(char *name, struct Typetable *type, struct Classtable *cptr, int size1, int size2, int nodetype, struct Paramstruct *paramlist);

struct Lsymbol* LLookup(char *name);
void LInstall(char *name, struct Typetable *type, int nodetype);

struct Paramstruct* PLookup(char *name);
void PInstall(char *name, struct Typetable *type, int nodetype);

void TypeTableCreate();
struct Typetable* TLookup(char *name);
void TInstall(char *name, int size, struct Fieldlist *fields);

struct Fieldlist* FLookup(struct Typetable *type, char *name);
void FInstall(struct Typetable *type, char *name);
int getSize(struct Typetable *type);

struct Classtable* CLookup(char *name);
void CInstall(char *name, char *parent_class_name);
struct Fieldlist* Class_FLookup(struct Classtable *cptr, char *name);
void Class_FInstall(struct Classtable *cptr, char *typename, char *name);
struct Memberfunclist* Class_MLookup(struct Classtable *cptr, char *name);
void Class_MInstall(struct Classtable *cptr, char *name, struct Typetable *type, struct Paramstruct *paramlist);
