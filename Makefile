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

main: lex.yy.o VariableTable.o TypesTable SubprogramTable.o
	$(CP) lex.yy.o VariableTable.o VariableEntry.o TypesTable.o SubprogramTable.o SubprogramEntry.o parserTest.cpp -o $(EXECUTABLE)

lex.yy.o: parser
	$(CC) -c lex.yy.c -o lex.yy.o

SubprogramTable.o: SubprogramEntry
	$(CP) -c SubprogramTable.cpp -o SubprogramTable.o

VariableTable.o: VariableEntry
	$(CP) -c VariableTable.cpp -o VariableTable.o

SubprogramEntry:
	$(CP) -c SubprogramEntry.cpp -o SubprogramEntry.o

VariableEntry:
	$(CP) -c VariableEntry.cpp -o VariableEntry.o

TypesTable:
	$(CP) -c TypesTable.cpp -o TypesTable.o

parser: parser.y lexer
	$(YACC) $(YACCPARAM) $(YACCFILE) -o parser.cpp

lexer: lexer.l
	$(LEX) $(LEXFILE)

clean:
	rm lex.yy.c
	rm lex.yy.o
	rm parser.hpp
	rm parser.cpp
