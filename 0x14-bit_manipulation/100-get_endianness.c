#include "main.h"

/**
 * get_endianness - hat checks the endianness.
 * Return:0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int i;
	char *endianness;

	i = 1;
	endianness = (char *)&i;

	if (*endianness == 1)
		return (1);

	return (0);
}
