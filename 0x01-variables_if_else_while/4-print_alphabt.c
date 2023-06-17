#include <stdio.h>
/**
 * main - entry point
 *
 * Descreption :Print from A TO Z "Alphabet" without 'q,e'
 *
 * Return: Always 0 (Success)
 *
 *
*/

int main(void)
{
	char ca = 'a';

	while (ca <= 'z')
	{
		if (ca == 'e' || ca == 'q')
			ca++;
		putchar(ca);
		ca++;
	}
	putchar('\n');

	return (0);
}
