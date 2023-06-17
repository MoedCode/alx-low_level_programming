#include <stdio.h>
/**
 * main - entry point
 *
 * Descreption :Print 0-9 using putchat(par1 + '0')
 *
 * Return: Always 0 (Success)
 *
 *
*/
int main(void)
{
	int chint = 0;

	for (; chint < 10; chint++)
	{
		putchar(chint + '0');
	}
	putchar('\n');
	return (0);
}
