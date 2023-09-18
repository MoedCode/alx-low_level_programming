#include"main.h"

/**
 * _strcat - concat tow strings
 *
 * @dest:  destnatin  string
 * @src: source
 *
 * Return:concat of dest and source
 *
 */
char *_strcat(char *dest, char *src)
{
	int i1, i2,  ln = _strlen(dest);

	for (i1 = ln, i2 = 0; src[i2] != '\0'; i1++, i2++)
	{
		dest[i1] = src[i2];
	}
	dest[_strlen(dest)] = '\0';
	return (dest);
}
