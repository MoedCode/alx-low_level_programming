#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

/* Packages */
#include <stdarg.h>
#include <stddef.h>
#include<stdio.h>
#include<string.h>
/* STRUCTS */
/**
 * struct fomatSpecifiersStruct - key format specifier
 *vlaue function pointer
 * @specifier: (key) format specifier
 * @pointer: (value)function pointer
 */
typedef struct fomatSpecifiersStruct
{
	char *specifier;
	void (*pointer)(va_list);
} FSS;

/* Prototypes */
int sum_them_all(const unsigned int n, ...);
int _putchar(char c);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
