#include <stdio.h>
/**
 * main - entry point
 *
 * Descreption :Print number 4 compination
 *
 * Return: Always 0 (Success)
 *
 *
*/

int main(void)
{
	int n0 = 0, n1;

	while (n0 <= 99)
	{
		n1 = n0;

		while (n1 <= 99)
		{
			if (n1 != n0)
			{
				putchar((n0 / 10) + 48);
				putchar((n0 % 10) + 48);
				putchar(' ');
				putchar((n1 / 10) + 48);
				putchar((n1 % 10) + 48);

				if (n0 != 98 || n1 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n1++;
		}
		n0++;
	}
	putchar('\n');
	return (0);
}
