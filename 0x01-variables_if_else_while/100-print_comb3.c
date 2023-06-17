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
	int num0 = 0;

	while (num0 <= 9)
	{
		int num1 = 0;

		while (num1 <= 9)
		{
			if (num0 != num1 && num0 < num1)
			{
				putchar(num0 + 48);
				putchar(num1 + 48);
				if (num0 + num1 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			num1++;
		}
		num0++;
	}
	putchar('\n');
	return (0);
}
