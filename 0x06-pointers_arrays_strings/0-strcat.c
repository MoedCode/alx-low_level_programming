#include "main.h"
/**
 * _strcat - appends the src string to the dest string
 *
 * @dest: destination pointer for type char *
 * @src: destination pointer for type char *
 *
 * Return: pointer to the concatenated string dest
 */

char *_strcat(char *dest, char *src)
{
	/*Dest length*/
	int i, ln, j;

	for (; dest[i] != '\0'; i++)
	{
		ln++;
	}
	/*appending*/
	while (src[j] != '\0')
	{
		dest[ln] = src[j];
		ln++;
		j++;
	}
	/*adding \0 at the end of dest*/
	dest[ln] = '\0';
	return (dest);
}
