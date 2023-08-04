#include "main.h"
/**
 * print_binary -   prints the binary representation of a number.
 * @n: number to be converted.
 * Return: (void).
 */
void print_binary(unsigned long int n)
{
	int size = 0;
	unsigned long int devRes,  tmpN = n;

	if (!n)
	{
		_putchar('0');
		return;
	}

	while (n >> 1 > 0)
	{
		n >>= 1;
		size++;
	}

	while (size >= 0)
	{
		devRes = (tmpN >> size);

		_putchar((devRes & 1) + 48);
		size--;
	}
}

