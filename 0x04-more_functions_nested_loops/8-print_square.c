#include"main.h"
/**
 * print_square -  prints  square
 * @size: print 'size' time TYPE INT
 * Description: function that prints  square
 *
 * Return: void
 *
 */
void print_square(int size)
{
	int a = 1;

	do {
		int b;

		for (b = 0; b < size; b++)
		{
			putchar('#');
		}
		putchar('\n');
		a++;
	} while (a <= size);
}
