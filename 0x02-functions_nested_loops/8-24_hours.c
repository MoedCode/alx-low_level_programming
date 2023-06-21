#include"main.h"
/**
 * jack_bauer - prints each  minute in Jack Bauer the day,
 * starting from 00:00 to 23:59
 *
 * Return: VOID
 *
 */
void jack_bauer(void)
{
	int i;

	for (i = 0; i < 24; i++)
	{
		int o;

		for (o = 0; o < 60; o++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(o / 10 + '0');
			_putchar(o % 10 + '0');
			_putchar('\n');
		}
	}
}
