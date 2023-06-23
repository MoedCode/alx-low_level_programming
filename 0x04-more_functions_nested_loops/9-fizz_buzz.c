#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the numbers 1 to 100,
 * followed by a new line.
 *  for multiples of three print Fizz instead of the
 * number and for the multiples of five print Buzz.
 * For numbers which are multiples of both three
 * and five print FizzBuzz.
 *
 * Return: void
 *
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("%s", "FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("%s", "Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("%s", "Buzz");
		}
		else
		{
			printf("%i", i);
		}
		if (i != 100)
			putchar(' ');
	}
	putchar('\n');
	return (0);
}
