#include "main.h"
/**
 * _strncpy - copies a 2 string argument from char*
 * @dest: sestnation
 * @src: source
 * @n: max number of chars  to copy
 *
 * Return: dest var
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; (i < n) && (src[i] != '\0'); i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
