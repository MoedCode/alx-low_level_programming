#include "search_algos.h"



/**
 * binary_search_01  -  searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: pointer to first index in integers array
 * @Left: The index  to start   search from
 * @Right: The index to  end   search at
 * @value: Value to search in the concern array
 * Return: (int) index if element that mach the concern value
 * or (-1) if that value not fond or null array pointer
 */

int binary_search_01(int *array,  size_t Right, size_t Left, int value)
{
	size_t i;

	if (!array)
		return (-1);

	while (Right >= Left)
	{
		printf("Searching in array: ");

		for (i = Left; i < Right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = Left + (Right - Left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			Right = i - 1;
		else
			Left = i + 1;
	}

	return (-1);
}

/**
 * exponential_search  - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: pointer to first index in integers array
 * @size: size of the array
 * @value: Value to search in the concern array
 * Return: (int) index if element that mach the concern value
 * or (-1) if that value not fond or null array pointer
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, Right;

	if (!array)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	Right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, Right);
	return (binary_search_01(array, i / 2, Right, value));
}
