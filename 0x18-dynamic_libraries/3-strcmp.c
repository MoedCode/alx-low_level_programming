#include"main.h"

/**
 * _strcmp - compare strings
 * @s1: type char*
 * @s2: type char*
 *
 * Return: (0) if both are equal , postive if the dont
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	if (*s1 != *s2)

		return (*s1 - *s2);
	else
		return (0);
}
