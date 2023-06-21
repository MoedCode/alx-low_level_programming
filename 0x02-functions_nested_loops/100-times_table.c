#include"main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @i: int value
 *
 * Return:  the last digit value
 *
 */
void print_times_table(int n)
{
	if (n >= 15 && n >= 0)
	{
		int i = 0;

		for (; i <= n; i++)
		{
			int j = 0;

			_putchar(48);
			for (; j <= n; j++)
			{
				int res =  i * j;

				_putchar(',');
				_putchar(' ');
				if (res <= 9)
					_putchar(' ');
				if (res <= 99)
					_putchar(' ');

				if (res >= 100)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) + '0');
				} else if (res <= 99 && res >= 10)
					_putchar((res / 10) + '0');
				_putchar((res % 10) + 48);

			}
			_putchar('\n');
		}
	}
}
