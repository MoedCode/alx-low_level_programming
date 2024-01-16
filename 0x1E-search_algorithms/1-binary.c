#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search  -  searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to first index in integers array
 * @size: size of the array
 * @value: Value to search in the concern array
 * Return: (int) index if element that mach the concern value
 * or (-1) if that value not fond or null array pointer
 */


int binary_search(int *array, size_t size, int value)
{
	int Left = 0, Right = (size_t)size - 1, Mid = 0;

	if (!array || !size)
		return (-1);
	while (Left <= Right)
	{
		print_arr(array, Left, Right);
		Mid  = (Left + Right) / 2;

		if (value == array[Mid])
			return (Mid);
		else if (value < array[Mid])
			Right = Mid - 1;
		else
			Left = Mid + 1;
	}

	return (-1);
}
/**
 * print_arr - print sconce  in array
 *
 * @array: pointer to first index in integers array
 * @Left: index to start with
 * @Right: index to stop at.
 */

void print_arr(int *array, int Left, int Right)
{
	int i;

	printf("Searching in array: ");
	for (i = Left; i <= Right; i++)
	{
		if (i == Right)
		{
			printf("%d", array[i]);
			continue;
		}
		printf("%d, ", array[i]);
	}
	printf("\n");
}
