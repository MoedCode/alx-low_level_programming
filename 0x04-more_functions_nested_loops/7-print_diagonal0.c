#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: type int
 *
 * Description: function
 *
 * Return: void
 *
 */
void print_diagonal(int n)
{
	int pos, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (pos = 1; pos <= n; pos++)
		{
			for (spc = 1; spc <= pos; spc++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
