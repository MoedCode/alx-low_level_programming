#include "main.h"

/**
 * print_numbers - prints from 0 to 9 Exept 2,4
 *
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 || i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
