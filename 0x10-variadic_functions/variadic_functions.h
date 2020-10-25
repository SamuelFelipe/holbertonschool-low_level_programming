#ifndef VFUNCTIONS_H
#define VFUNCTIONS_H

#include<stdarg.h>
#include<stdio.h>

/**
 * struct form - Struct form
 *
 * @type: type of variable
 * @f: The function associated
 */

typedef struct form
{
	char *type;
	void (*f)(va_list arg);
} for_;

int _putchar(char);
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);

#endif
