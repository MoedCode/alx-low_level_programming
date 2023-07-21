#include <stddef.h>
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all its parameters.
 *
 * @n: parameter number
 * @...: parameters
 * Return: (int) sum of the all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	size_t i, result = 0;
	int tmp;
	va_list args;

	if (n == 0)
		return (n);

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		tmp = 0;
		tmp = va_arg(args, int);
		result  += tmp;
	}
	va_end(args);
        	return (result);


}

