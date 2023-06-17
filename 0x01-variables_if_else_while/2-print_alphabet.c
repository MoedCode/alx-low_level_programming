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
	char chr0 = 'a';

	while (chr0 <= 'z')
	{
		putchar(chr0);
		chr0++;
	}
	putchar('\n');
	return (0);
}
