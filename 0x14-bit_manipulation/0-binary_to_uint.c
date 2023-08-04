#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * binary_to_uint - binary nber to an unsigned int.
 *
 * @b:pointing to a string of 0 and 1 chars
 * Return: (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	int i, bnrSwap = 0;
	unsigned int len,  n = 0;


	if (!b)
		return (0);

	len = strlen(b);

	for (i = len - 1; i >= 0; i--)
	{
		int cast;

		cast = (((int)b[i]));
		if (cast < 48 || cast > 57)
			return (0);

		n += (cast - 48) << bnrSwap;
		bnrSwap++;
	}

	return (n);
}
