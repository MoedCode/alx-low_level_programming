#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - return pointer for  duplicated  string
 *
 * @str: string to duplicated and  copied
 *
 * Return: (NULL) if str is null otherways  pointer for  (str)
 */

char *_strdup(char *str)
{
	int i, j;
	char *str_;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	str_ = malloc((i * 2) * sizeof(char));

	if (str_ == NULL)
		return (NULL);

	for (j = 0; j <= i; j++)
	{
		str_[j] = str[j];
	}
	return (str_);
}
