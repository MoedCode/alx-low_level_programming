#include "main.h"

/**
 * flip_bits -function that returns the number of bits
 * would needed to flip to get from one number to another.
 * @n: (uli) first number to be compare
 * @m: (uli) second number to be compare
 * Return: (BTS) number of bits to flip to  from n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int aftFlib, BTS = 0;

	aftFlib = n ^ m;
	while (aftFlib > 0)
	{
		BTS += (aftFlib & 1);
		aftFlib >>= 1;
	}

	return (BTS);
}
