#include <cstdio>
#include "parser.cpp"

extern FILE* yyin;

int main(int argc, char *argv[]) {
        if (argc > 0) {
                yyin = fopen(argv[1], "r");
        } else {
                yyin = stdin;
        }

	printf("\t\t******* Samekh Compiler ********\n");
	yyparse();
	//printf("o código passou sem erros!!\n");
  return 0;
}
