#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strins followed by a new line
 *
 * @separator: char* constant separator
 * @n: argument number
 *
 * Return: (void)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	size_t i;
	char *s;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char*);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < (n - 1) && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	putchar(10);

}
