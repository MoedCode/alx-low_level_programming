#include"main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s: type char*
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
		ln++;
	return (ln);
}

/**
 * rev_string - Write a function that reverses a string
 *
 * @s: type char*
 *
 * Return:Nothing bro
 */

void rev_string(char *s)
{
	int ln = _strlen(s), tmp, i = 0;

	for (; i < ln / 2; i++)
	{
		tmp = s[i];
		s[i] = s[ln - 1 - i];
		s[ln - 1 - i] = tmp;
	}
}
