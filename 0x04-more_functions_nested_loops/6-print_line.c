#include"main.h"
/**
 * print_line -  draws straight on  terminal ising '_'.
 * @n: from type int
 *
 * Description: function
 *
 * Return: void
 *
 */
void print_line(int n)
{
	int l;

	for (l = 1; l <= n; l++)
	{
		if (l > 0)
			_putchar('_');
	}
	_putchar('\n');
}
