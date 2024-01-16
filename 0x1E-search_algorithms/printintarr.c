#include "search_algos.h"

int print_int_arr(int *array, size_t size)
{
	size_t i, print = 0;

	if (!array || !size)
		return (0);
	for (i =  0; i < size; i++)
	{	if (print)
			putchar(',');
		printf("%i", array[i]);
		print = 1;
	}
	return (int)(i);
}
int print_int_sec(int *array, int start, int end)
{
	size_t i, print = 0;

	if (!array)
		return (0);
	for (i =  start; (int)i <  end; i++)
	{	if (print)
			putchar(',');
		printf("%i", array[i]);

		print = 1;
	}
	putchar(10);
	return (int)(i);
}