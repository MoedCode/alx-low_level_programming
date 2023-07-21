#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all -  function that prints anything.
 * @format: a list of type spicifers.
 *@..: arguments
 * Return: (void).
 */
void print_all(const char * const format, ...)
{
	size_t i = 0, j, caseMode = 0;
	char *S,  *typSpBuff = "cifs";
	va_list args;


	va_start(args, format);
	for (i = 0; format && format[i]; i++)
	{
		j = 0;
		while (typSpBuff[j])
		{
			if (format[i] == typSpBuff[j] && caseMode)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int)), caseMode = 1;
				break;
			case 'i':
				printf("%d", va_arg(args, int)), caseMode = 1;
				break;
			case 'f':
				printf("%f", va_arg(args, double)), caseMode = 1;
				break;
			case 's':
				S = va_arg(args, char *), caseMode = 1;
				if (!S)
				{
					printf("(nil)");
					break;
				}
				printf("%s", S);
				break;
		}
	}
	printf("\n"), va_end(args);
}
