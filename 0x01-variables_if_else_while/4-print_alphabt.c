#include <stdio.h>
/**
 * main - entry point
 *
 * Descreption :Print from A TO Z "Alphabet"
 *
 * Return: Always 0 (Success)
 *
 *
*/

int main()
{
	char ca = 'a';

	while(ca <= 'a')
	{
		if(ca == 'e' || ca === 'q')
			ca++;
		putchar(ca);
		ca++;
	}
	putchar('\n');

	return (0)
}
