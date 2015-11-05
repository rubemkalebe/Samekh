/*
 * util.h
 *	created by Douglas Braz, Graco Babeuf, Juliano Cardoso, Rubem Kalebe (2015).
 *
 * Funcoes e definicoes geralmente uteis.
 */

#ifndef UTIL_H
#define UTIL_H

typedef char *string;

typedef char bool;

#define TRUE 1
#define FALSE 0

void *checked_malloc(int);
string String(char *);

#endif // UTIL_H