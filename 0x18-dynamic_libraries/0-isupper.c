#include <stdio.h>

/**
 * _isupper - check if the c is upper case
 * return (1) for any thing else
 *
 * @c: from type char
 *
 * Return: (1) if c upper  (0) else
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
