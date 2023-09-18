#include "main.h"
/**
 * _strlen -  returns the length of a string.
 *
 * @s: type char*
 *
 * Return: length
 */
int _strlen(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
		ln++;
	return (ln);
}
/**
 * _strncpy - concat tow strings
 *
 * @dest:  destnatin  string
 * @src: source
 *
 * * @n: maximum  length copied == src length
 *
 * Return:concat of dest and source
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
