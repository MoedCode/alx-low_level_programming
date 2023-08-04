#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to usigned int value to be set.
 * @index:  starting from 0 of the bit you want to set
 *
 * Return: (1) on succsess , (-1)  an error .
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int M = 1 << index;

	if (index > 64)
		return (-1);

	*n |= M;

	return (1);
}
