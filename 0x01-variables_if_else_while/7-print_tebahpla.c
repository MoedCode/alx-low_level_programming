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
	char char0 = 'z';

while (char0 >= 'a')
	{
		putchar(char0);
		char0--;
	}
	putchar('\n');
	return (0);
}
