#include "main.h"

/**
 * leet - encodes a string into Leet (or "1337").
 * @c: type char* string to incode
 * Return: c
 */
char *leet(char *c)
{
	int i, j;
	char incS[] = {'4', '3', '0', '7', '1'};
	char incD[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L' };

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if ((int)c[i] == (int)incD[j])
			{
				c[i] = incS[j / 2];
				break;
			}
		}
	}
	return (c);
}
