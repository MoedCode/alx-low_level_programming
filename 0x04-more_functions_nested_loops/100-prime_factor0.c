#include <stdio.h>
#include <math.h>

/**
 * main - Entry point for the program
 *
 * Description: isPrime  Checks if a given number is prime
 *
 * @n: type long long int
 *
 * Return: Always 0
 */

int isPrime(long long int n)
{
	if (n <= 1)
	{
		return (0);
	}
	for (long long int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

int main(void)
{
	long long int num = 612852475143, lpf = 1;

	for (long long int i = 2; i <= sqrt(num); i++)
	{
		if (num % i == 0 && isPrime(i))
		{
			lpf = i;
		}
	}
	printf("%lld\n", lpf);
	return (0);
}
