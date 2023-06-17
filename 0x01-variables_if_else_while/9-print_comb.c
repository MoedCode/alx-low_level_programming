#include <stdio.h>
/**
 * main - entry point
 *
 * Descreption :Print from 1 - 9 as string separated with ,
 *
 * Return: Always 0 (Success)
 *
 *
*/

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		if (num < 57)
			putchar(',');
		num++;
	}
	putchar('\n');
	return (0);
}
