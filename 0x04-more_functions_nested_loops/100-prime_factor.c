#include <stdio.h>

/**
 * main - prints  largest prime factor of 612852475143
 *
 * Description: function;
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143,  i;

	for (i = 2; i < num; i++)
	{
		while (num % i == 0)
			num /= i;
	}

	printf("%ld\n", num);

	return (0);
}
