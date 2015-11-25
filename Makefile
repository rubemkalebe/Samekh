# DEFINIÇÃO DAS VARIÁVEIS ( OPCIONAL )
LEX=flex
YACC=bison
CC=gcc
CP=g++
LEXFILE=lexer.l
LEXPARAM=-ll
YACCPARAM=-d
YACCFILE=parser.y
EXECUTABLE=parserTest

main: lex.yy.o Environment.o
	$(CP) lex.yy.o Environment.o parserTest.cpp -o $(EXECUTABLE)

lex.yy.o: parser
	$(CC) -c lex.yy.c -o lex.yy.o

Environment.o:
	$(CP) -c Environment.cpp -o Environment.o

parser: parser.y lexer
	$(YACC) $(YACCPARAM) $(YACCFILE) -o parser.cpp

lexer: lexer.l
	$(LEX) $(LEXFILE)

clean:
	rm lex.yy.c
	rm lex.yy.o
	rm parser.hpp
	rm parser.cpp
