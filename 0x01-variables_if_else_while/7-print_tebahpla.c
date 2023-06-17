#include <stdio.h>
/**
 * main - entry point
 *
 * Descreption :Print from a TO z "Alphabet"
 *
 * Return: Always 0 (Success)
 *
 *
*/
int main(void)
{
	for (int i = 122; i > 96 ; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
