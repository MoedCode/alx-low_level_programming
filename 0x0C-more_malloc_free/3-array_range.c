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
	int *intArr, 
	    int i;

	if (max < min)
		return (NULL);

	intArr = malloc(sizeof(int *) * ((max - min) + 1));
	if (intArr == NULL)
		return (intArr);
	for (i = 0; min <= max; min++, i++)
		intArr[i] = min;

	return (intArr);
}
