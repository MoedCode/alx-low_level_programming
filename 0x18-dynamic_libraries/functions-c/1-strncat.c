#include"main.h"
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
 * _strncat - concat tow strings
 *
 * @dest:  destnatin  string
 * @src: source
 *
 * * @n: maximum  length copied == src length
 *
 * Return:concat of dest and source
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i0, i1, ln = _strlen(dest) + (_strlen(src));

	if (n > ln)
	{
		n = ln;
	}
	for (i0 = _strlen(dest), i1 = 0; i0 < ln && i1 < n; i0++, i1++)
		dest[i0] = src[i1];
	return (dest);
}
