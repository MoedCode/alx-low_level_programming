#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _int : peint int
 * @args: int arg
 * Return: (void)
 */

void _int(va_list args)
{
	printf("%i", va_arg(args, int));
}
/**
 * _float : peint int
 * @args: floatt arg
 * Return: (void)
 */

void _float(va_list args)
{
	printf("%f", va_arg(args, double));
}
/**
 * _char : peint char
 * @args: char arg
 * Return: (void)
 */

void _char(va_list args)
{
	printf("%c", va_arg(args, int));
}
/**
 * _string : peint string
 * @args: string arg
 * Return: (void)
 */

void _string(va_list args)
{
	char *string = va_arg(args, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - prints anything.
 * @format: a list of types of arguments passed to the function.
 *
 * Return: no return.
 */

void print_all(const char *const format, ...)
{
	size_t formatCount, fomStructCount;
	char *separator = "";
	va_list args;


	FSS fss[] = {
		{"i", _int},
		{"f", _float},
		{"c", _char},
		{"s", _string},
	};

	va_start(args, format);
	formatCount = 0;
	while (format && format[formatCount])
	{
		fomStructCount = 0;
		while (fomStructCount < 4)
		{
			if (fss[fomStructCount].specifier[0] == format[formatCount])
			{
				printf("%s", separator);
				separator = ", ";
				fss[fomStructCount].pointer(args);
				break;
			}
			fomStructCount++;
		}
		formatCount++;
	}
	printf("\n");
	va_end(args);
}
