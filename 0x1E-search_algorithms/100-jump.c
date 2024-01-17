#include <stdio.h>
#include "search_algos.h"
/**
 *jump_search  - searches for a value in a sorted array of integers
 *using the Jump search algorithm
 *
 * @array: pointer to first index in integers array
 * @size: size of the array
 * @value: Value to search in the concern array
 * Return: (int) index if element that mach the concern value
 * or (-1) if that value not fond or null array pointer
 */
int jump_search(int *array, size_t size, int value)
{

	int Low, High = 0, i, sizeI, Jump;

	if (size == 0 || array == NULL)
		return (-1);

	Jump = (int)sqrt(size);
	sizeI = (int)size;

	for (; High < sizeI && array[High] < value; )
	{
		printf("Value checked array[%d] = [%d]\n", High, array[High]);
		Low = High;
		High += Jump;
	}

	printf("Value found between indexes [%d] and [%d]\n", Low, High);
	for (i = Low; i <= High && i < sizeI; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
