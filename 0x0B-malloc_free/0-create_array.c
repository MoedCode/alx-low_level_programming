#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array with  given size using malloc
 * and asssign a char c to all of index
 * @size:unsigned int unsize of the array
 * @c: char to be assined to the  arry
 * Return: array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);

}

