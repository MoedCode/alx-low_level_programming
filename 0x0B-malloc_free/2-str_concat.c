#include"stdlib.h"
#include <stdio.h>

/**
 * length - returns the length of a string.
 *
 * @s: type char* to claculate its length
 *
 * Return: (s length)
 */

int length(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * str_concat - function that append the second strin to the first string
 *
 * parameter:
 * @s1: first string
 * @s2: second string
 *
 * Return: first String + second string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, ln1,  ln3;
	char *s3;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	ln1 = j = length(s1);
	ln3 = length(s1) + length(s2) + 1;

	s3 = malloc(ln3 * sizeof(char));

	if (s3 == NULL)
		return (NULL);
	for (; i < ln1; i++)
	{
		if (s1[i] != '\0')
		{
			s3[i] = s1[i];
		}
	}

	for (; j < ln3; j++)
	{
		if (s2[i] != '\0')
		{
			s3[j] = s2[k];
			k++;
		}
	}
	return (s3);

}

