#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14.
 *
 *
 * Return: void
 */
void more_numbers(void)
{
	int row, col, val;

	for (row = 1; row <=  10; row++)
	{
		for (col = 0; col <= 14; col++)
		{
			val =  col;
			if (col > 9)
			{
				_putchar(1 + 48);
				val = col % 10;
			}
			_putchar(val + 48);

		}
		_putchar('\n');
	}
}
