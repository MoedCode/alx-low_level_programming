#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: that wikk be returned.
 * @n: index value
 * Return:(int) which is the value to crosponding index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	while (index < 64)
	{
		if (i == index)
		{
			return (n & 1);
		}
		n >>= 1;
		i++;
	}
	return (-1);
}

