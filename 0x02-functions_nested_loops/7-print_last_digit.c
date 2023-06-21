#include"main.h"
/**
 * print_last_digit - prints the last digit of a numbers.
 * @i: int value
 *
 * Return: the value of the last digit
 *
 */
int print_last_digit(int i)
{
	int last;

	if (i > 0)
	{
	last = i % 10;

	_putchar(last + '0');
	return (i % 10);
	}
	else
	{
		last = -1 * (i % 10);

		_putchar(last + '0');
		return (last);

	}
}
