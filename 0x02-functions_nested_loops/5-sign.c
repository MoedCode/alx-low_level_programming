#include"main.h"
/**
 * print_sign - prints the sign of a number.
 *@num: paramter of type int
 *
 * Return: 1 and prints + if num is postive and print
 * 0 if is it and -1 - if num is less than zero
 *
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (num < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
