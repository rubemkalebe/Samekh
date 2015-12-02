# DEFINIÇÃO DAS VARIÁVEIS ( OPCIONAL )
LEX=flex
YACC=bison
CP=g++
LEXFILE=src/lexer.l
LEXPARAM=-ll
YACCPARAM=-d
YACCFILE=src/parser.y
EXECUTABLE=sam
INC=include/
SRC=src/
OBJ=obj/

main: lex.yy.o VariableTable.o TypesTable SubprogramTable.o
	$(CP) -I $(INC) $(OBJ)lex.yy.o $(OBJ)VariableTable.o $(OBJ)VariableEntry.o $(OBJ)TypesTable.o $(OBJ)SubprogramTable.o $(OBJ)SubprogramEntry.o $(SRC)parserTest.cpp -o $(EXECUTABLE)

lex.yy.o: parser
	$(CC) -c -I $(INC) $(SRC)lex.yy.c -o $(OBJ)lex.yy.o

SubprogramTable.o: SubprogramEntry
	$(CP) -c -I $(INC) $(SRC)SubprogramTable.cpp -o $(OBJ)SubprogramTable.o

VariableTable.o: VariableEntry
	$(CP) -c -I $(INC) $(SRC)VariableTable.cpp -o $(OBJ)VariableTable.o

SubprogramEntry:
	$(CP) -c -I $(INC) $(SRC)SubprogramEntry.cpp -o $(OBJ)SubprogramEntry.o

VariableEntry:
	$(CP) -c -I $(INC) $(SRC)VariableEntry.cpp -o $(OBJ)VariableEntry.o

TypesTable:
	$(CP) -c -I $(INC) $(SRC)TypesTable.cpp -o $(OBJ)TypesTable.o

parser: lexer
	$(YACC) $(YACCPARAM) $(YACCFILE) -o $(SRC)parser.cpp ; mv $(SRC)parser.hpp include/

lexer:
	$(LEX) $(LEXFILE) ; mv lex.yy.c src/

clean:
	rm $(SRC)lex.yy.c
	rm $(INC)parser.hpp
	rm $(SRC)parser.cpp
	rm $(OBJ)*.o