# define o compilador a ser utilizado
CP=gcc

# utilizada para adicionar opcoes a compilacao
COPT=-ll -o

# variavel para pasta 'src/'
SRC=src/

# variavel para pasta 'obj/'
OBJ=obj/

# variavel para pasta 'include/'
INC=include/

# variavel para lex
LEX=flex

scanner: $(OBJ)lex.yy.o
	$(CP) $(SRC)scanner.c $(OBJ)lex.yy.o -I $(INC) $(COPT) scanner

$(OBJ)lex.yy.o: $(SRC)lex.yy.c
	$(CP) -c -I $(INC) $(SRC)lex.yy.c -o $(OBJ)lex.yy.o

$(SRC)lex.yy.c: $(SRC)g+-.l
	$(LEX) -o $(SRC)lex.yy.c $<

clean:
	rm scanner
	rm $(OBJ)lex.yy.o
	rm $(SRC)lex.yy.c
