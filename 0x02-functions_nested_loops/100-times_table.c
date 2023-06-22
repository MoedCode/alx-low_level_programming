#include"main.h"
/**
 * print_times_table - function that prints the last digit of a number.
 * @i: int value
 * @n:from type int
 * Return: the value of the last number
 *
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{
	int i = 0;

	for (; i <= n; i++)
	{
		int j = 0;

		for (; j <= n; j++)
		{
		int result = i * j;

		if (result <= 9 && j != 0)
		{
			_putchar(' ');
		}

		if (result <= 99 && j != 0)
		{
			_putchar(' ');
		}
		if (result >= 100)
		{
			_putchar((result / 100) + '0');
			_putchar((result % 10) + '0');
		}
		else if (result <= 99 && result >= 10)
			_putchar((result / 10) + 48);
		_putchar((result % 10) + 48);

		if (j != n)
		{
			_putchar(',');
			_putchar(' ');
		}
		}
		_putchar('\n');
	}
	}
}
