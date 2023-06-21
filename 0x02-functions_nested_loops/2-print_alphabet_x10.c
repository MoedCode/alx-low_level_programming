#include"main.h"
/**
 * print_alphabet_x10 - function that print the alphabet ten times
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int k;

		for (k = 'a'; k <= 'z' ; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
