#include<stdio.h>
/**
 * print_array - that print arr elemnts
 *
 * @a: array
 * @n: length
 * return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	putchar('\n');
}
