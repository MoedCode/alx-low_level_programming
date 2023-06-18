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
	int n0 = 0, n1, n2, n3;

	while (n0 <= 9)
	{
		n1 = 0;

		while (n1 <= 9)
		{
			n2 = 0;

			while (n2 <= 9)
			{
				n3 = 0;
				while (n3 <= 9)
				{
					putchar(n0 + 48);
					putchar(n1 + 48);
					putchar(' ');
					putchar(n2 + 48);
					putchar(n3 + 48);
					putchar(' ');
					putchar(',');
					if (n0 == 9 &&  n1 == 8 &&  n2 == 9 &&  n3 == 9)
					{
						return (0);
					}
					n3++;


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
