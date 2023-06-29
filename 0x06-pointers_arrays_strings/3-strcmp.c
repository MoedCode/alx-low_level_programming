#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: type char*
 * @s2: type char*
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++; 
		s2++;
	}
	return (unsigned s1 - unsigned s2);

}
