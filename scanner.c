/*
 * scanner.c
 *	created by Douglas Braz, Graco Babeuf, Juliano Cardoso, Rubem Kalebe (2015).
 *
 * Implementacao do scanner.
 */

#include <stdio.h>
#include "tokens.h"

extern int yylex();
extern int yylineno;
extern char* yytext;
extern FILE* yyin;

const char* getTokenName(int value);

int main(int argc, char *argv[]) {

	int ntoken, vtoken;

	if (argc > 0) {
		yyin = fopen(argv[1], "r");
	} else {
		yyin = stdin;
	}

	ntoken = yylex();

	while(ntoken) {
		printf("%s ::= %s\n",yytext, getTokenName(ntoken));
		ntoken = yylex();
	}

	return 0;
}

const char* getTokenName(int value) {
	switch(value) {
		case 257: return "DECIMAL";
		case 258: return "IDENTIFIER";
		case 259: return "REAL";
		case 260: return "TRUE";
		case 261: return "FALSE";
		case 262: return "STR";
		case 263: return "HEX";
		case 264: return "OCTAL";
		case 265: return "BYTE";
		case 266: return "BOOL";
		case 267: return "SHORT";
		case 268: return "INT";
		case 269: return "LONG";
		case 270: return "FLOAT";
		case 271: return "DOUBLE";
		case 272: return "CHAR";
		case 273: return "STRING";
		case 274: return "STRUCT";
		case 275: return "UNION";
		case 276: return "ENUM";
		case 277: return "AUTO";
		case 278: return "IF";
		case 279: return "ELSIF";
		case 280: return "ELSE";
		case 281: return "WHILE";
		case 282: return "FOR";
		case 283: return "RETURN";
		case 284: return "PROC";
		case 285: return "FUNC";
		case 286: return "ENDBLOCK";
		case 287: return "ENDCASE";
		case 288: return "ENDENUM";
		case 289: return "ENDFOR";
		case 290: return "ENDFUNC";
		case 291: return "ENDIF";
		case 292: return "ENDPROC";
		case 293: return "ENDSTRUCT";
		case 294: return "ENDUNION";
		case 295: return "ENDWHILE";
		case 296: return "BREAK";
		case 297: return "CONT";
		case 298: return "DO";
		case 299: return "CASE";
		case 300: return "WHEN";
		case 301: return "CONST";
		case 302: return "STATIC";
		case 303: return "SIZEOF";
		case 304: return "TYPEOF";
		case 305: return "PRINT";
		case 306: return "PRINTLN";
		case 307: return "READ";
		case 308: return "NNULL";
		case 309: return "ASSIGN";
		case 310: return "LT";
		case 311: return "GT";
		case 312: return "LET";
		case 313: return "GET";
		case 314: return "EQ";
		case 315: return "DIFF";
		case 316: return "PLUS";
		case 317: return "MINUS";
		case 318: return "ASTERISK";
		case 319: return "DIV";
		case 320: return "MOD";
		case 321: return "PLUSASSIGN";
		case 322: return "MINUSASSIGN";
		case 323: return "PRODUCTASSIGN";
		case 324: return "DIVASSIGN";
		case 325: return "MODASSIGN";
		case 326: return "NOT";
		case 327: return "AND";
		case 328: return "OR";
		case 329: return "SCAND";
		case 330: return "SCOR";
		case 331: return "COMPLEMENT";
		case 332: return "AMPERSAND";
		case 333: return "BANDASSIGN";
		case 334: return "BOR";
		case 335: return "BORASSIGN";
		case 336: return "BOREXC";
		case 337: return "BOREXCASSIGN";
		case 338: return "LSHIFT";
		case 339: return "LSHIFTASSIGN";
		case 340: return "RSHIFT";
		case 341: return "RSHIFTASSIGN";
		case 342: return "SEMICOLON";
		case 343: return "DOT";
		case 344: return "COMMA";
		case 345: return "LPAREN";
		case 346: return "RPAREN";
		case 347: return "LSQPAREN";
		case 348: return "RSQPAREN";
		case 349: return "LBRACE";
		case 350: return "RBRACE";
	}
}
