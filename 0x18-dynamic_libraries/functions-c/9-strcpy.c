#include"main.h"
/**
 * _strlen - returns the length of a string
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
