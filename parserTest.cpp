#include <iostream>
#include <cstdio>
#include <unistd.h>
#include <wait.h>
#include "parser.cpp"

using namespace std;

extern FILE* yyin;

int main(int argc, char *argv[]) {
  if (argc > 1) {
    yyin = fopen(argv[1], "r");
  } else {
    /*printf("fatal error: no input files\ncompilation terminated.\n");
    exit(1);*/
    yyin = stdin;
  }

  fileHeader();

  if(!yyparse()) {
  	printf("O codigo passou sem erros!!\n");
    int pid;
    if((pid = fork()) == 0) {
      string param = fileOutputName + " -lstdc++";
      execl("/usr/bin/gcc", "gcc", fileOutputName.c_str(), (char*) "-lstdc++", NULL);
      exit(0);
    } else {
      while (waitpid(pid, NULL, WNOHANG)== 0)
        ;
      printf("Executable generated!!\n");
    }
  } else {
    printf("O codigo NAO passou!!\n");
  }

  //remove(fileOutputName.c_str());

  return 0;
}
