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
	char chara = 'a';
	char charA = 'A';

	/*Log Alphabeto  a-z*/
	while (chara <= 'z')
	{
		putchar(chara);
		chara++;
	}
	/*A - Z*/
	while (charA <= 'Z')
	{
		putchar(charA);
		charA++;
	}
	putchar('\n');
	return (0);
}
