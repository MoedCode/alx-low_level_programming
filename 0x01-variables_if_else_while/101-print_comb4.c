#include <stdio.h>
/**
 * main - entry point
 *
 * Descreption :Print number compination  A TO Z "Alphabet"
 *
 * Return: Always 0 (Success)
 *
 *
*/

int main(void)
{
	int n0 = 0,  n1,  n2;

	while (n0 <= 9)
	{
		n1 = 0;
		while (n1 <= 9)
		{
			n2 = 0;
			while (n2 <= 9)
			{
				if (n0 != n1 && n0 != n2 && n1 != n2 && n0 < n1 && n0 < n2 && n1 < n2)
				{
					putchar(n0 + 48);
					putchar(n1 + 48);
					putchar(n2 + 48);
					if (n0 + n1 + n2 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				n2++;
			}
			n1++;
		}
		n0++;
	}
	putchar('\n');
	return (0);
}
