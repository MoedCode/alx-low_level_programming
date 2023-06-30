#include "main.h"
/**
 * string_toupper - small letters to capital letters
 * @str:argument type char* for sting will be change
 *
 * Return: a (string after the convertion)
 */
char *string_toupper(char *str)
{
	int i, j, ASCII;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 'a'; j < 'z'; j++)
		{
			ASCII = (int)str[i];
			if (ASCII == (int)j)
			{
				str[i] = str[i] - 32;
			}
		}
	}
	return (str);

}
