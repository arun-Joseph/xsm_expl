yacc -d test.y
lex test.l
gcc y.tab.c lex.yy.c -o test.exe
./test.exe
./xsm -l library.lib -e test.xsm
