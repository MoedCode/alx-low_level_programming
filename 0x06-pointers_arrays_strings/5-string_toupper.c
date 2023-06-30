#include "main.h"
/**
 * string_toupper - small letters to capital letters
 * @a:argument type char* for sting will be change
 *
 * Return: a (string after the convertion)
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;

		}
		i++;
	}
	return (str);

}
