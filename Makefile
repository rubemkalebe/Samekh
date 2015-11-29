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

main: lex.yy.o Entry SymbolTable.o TypesTable
	$(CP) lex.yy.o SymbolTable.o Entry.o PrimitiveTypeEntry.o TypesTable.o parserTest.cpp -o $(EXECUTABLE)

lex.yy.o: parser
	$(CC) -c lex.yy.c -o lex.yy.o

SymbolTable.o: PrimitiveTypeEntry.o
	$(CP) -c SymbolTable.cpp -o SymbolTable.o

PrimitiveTypeEntry.o: Entry
	$(CP) -c PrimitiveTypeEntry.cpp -o PrimitiveTypeEntry.o

Entry:
	$(CP) -c Entry.cpp -o Entry.o

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
