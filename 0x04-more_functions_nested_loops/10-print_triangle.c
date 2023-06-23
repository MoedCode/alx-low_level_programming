#include "main.h"
/**
 * print_triangle - prints a triangle &&  new line.
 * @size: type int
 *
 * return: 0
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 1;

		for (; i <= size; i++)
		{
			j = i;
			for (; j < size; j++)
			{
				_putchar(' ');
			}
			k = 1;
			for (; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
