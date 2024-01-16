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
	int i;

	if (!array || !size)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return  (-1);
}
int binary_search_rec(int *array, size_t startIdx,size_t size, int value)
{
	  size_t midIdx = 0;

	if (!array || !size)
		return (-1);


	/*check case A */
	if (array[midIdx] > value)
	{

		binary_search_rec(array, midIdx, size, value);


	}
	/*check case B */
	if (array[midIdx] < value)
	{

	}
	/*check case C */
	if (array[midIdx] == value)
		return (midIdx);

	print_int_arr(array, size);
	printf("mid index val= [%i]  value[%d]\n",(int)midIdx, value);
	return (0);

}