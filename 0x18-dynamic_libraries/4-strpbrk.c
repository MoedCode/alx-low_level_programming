#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search in "s" about 'char' from "accept"
 * as son as it find the char return pointer to it
 * @s: A string pointer to search in .
 * @accept: A string pointer fond charcer.
 *
 * Return: A pointer to the first occurrence of a matching character in 's'
 * , or return null if no match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int lns = _strlen(s), lnc = _strlen(accept), i, i1;

	for (i = 0; i < lns; i++)
	{
		for (i1 = 0; i1 < lnc; i1++)
		{
			if (*s == accept[i1])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}

