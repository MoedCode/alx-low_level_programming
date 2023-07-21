#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator:separator!
 * @n: arguments number
 * @ ... :arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i < (n - 1) && separator)
			printf("%s", separator);

	}
	putchar(10);

}
