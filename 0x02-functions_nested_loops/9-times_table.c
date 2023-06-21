#include"main.h"

/**
 * times_table -  prints the 9 times table, starting with 0.
 *
 *
 * Return: void
 *
 */
void times_table(void)
{
	int i = 0;

	while (i <= 9)
	{
		int O = 0;

		while (O <= 9)
		{
			int res = i * O;

			if (O == 0)
			{
				_putchar(res + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (result <= 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((res / 10) + '0');
				}
				_putchar((res % 10) + '0');
			}
			O++;
		}
		_putchar('\n');
		i++;
	}
}
