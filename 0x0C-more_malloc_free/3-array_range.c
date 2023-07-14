#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range -  allocat memory to\creates an array of integers
 * @min: int minimum  values
 * @max: int maximum values
 * Return: int (pointer)to allocated array,(NULL) on falier
 */
int *array_range(int min, int max)
{
	int i, j, *intArr;

	if (min > max)
		return (NULL);

	intArr = malloc((max - min + 1) * sizeof(int));

	if (intArr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		intArr[j] = i;

	return (intArr);
}
