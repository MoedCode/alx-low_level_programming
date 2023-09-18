#include"main.h"

/**
 * _strcpy - copies a strings using pointers
 *
 * @src:source string
 *
 * @dest:destination string
 *
 * Return: the  value of destnation string
 *
 */
char *_strcpy(char *dest, char *src)

{
	int i = 0;

	for (; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
