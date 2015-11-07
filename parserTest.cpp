#include <cstdio>
#include "parser.cpp"

extern FILE* yyin;

int main(int argc, char *argv[]) {
        if (argc > 0) {
                yyin = fopen(argv[1], "r");
        } else {
                yyin = stdin;
        }

	//printf("\t\t******* Samekh Compiler ********\n");
	if(!yyparse()) {
  	printf("O codigo passou sem erros!!\n");
  } else {
    printf("O codigo NAO passou!!\n");
  }
  return 0;
}
