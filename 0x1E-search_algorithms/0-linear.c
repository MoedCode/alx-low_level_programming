#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search -searches for a value in given int array
 *using the Linear search algorithm
 *
 * @array: pointer to first index in integers array
 * @size: size of the array
 * @value: Value to search in the concern array
 * Return: (int) index if element that mach the concern value
 * or (-1) if that value not fond or null array pointer
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array || !size)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%d]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return  (-1);
}
