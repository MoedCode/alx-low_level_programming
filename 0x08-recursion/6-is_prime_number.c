#include <stdio.h>
/**
 * isPrime - Helper function for checking if the inpit is a prime
 * number recursively.
 * @n_:  current divisor from 0 to n
 * @n: number to be checked  if it a prime
 * Return: (1) prime, (0) otherwise.
 */
int isPrime(int n, int n_)
{
	if (n_ > n)
	{
		return (1);
	}
	if (n % n_ == 0 && n_ != 1 && n_ != n && n_ <= n)
	{

		return (0);
	}
	return (isPrime(n_ + 1, n));
}
int is_prime_number(int n)
{
	int n_ = 1;

	if (n < 2)
	{
		return (0);
	}

	return (isPrime(n_, n));
}
