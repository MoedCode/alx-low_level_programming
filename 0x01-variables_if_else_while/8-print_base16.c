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

int main(void)
{
	/* numeric value for '0' is 48*/
	int hexa = 48;

	while (hexa <= 102)
	{
		putchar(hexa);
		if (hexa == 57)
			hexa += 39;
		hexa++;
	}
	putchar('\n');
	return (0);
}
