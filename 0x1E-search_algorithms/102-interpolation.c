#include "search_algos.h"
/**
 * interpolation_search  -  searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 *
 * @array: pointer to first index in integers array
 * @size: size of the array
 * @value: Value to search in the concern array
 * Return: (int) index if element that mach the concern value
 * or (-1) if that value not fond or null array pointer
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t Position, Lowest, Hights;
	double THE_FACTOR;

	if (!array)
		return (-1);

	Lowest = 0;
	Hights = size - 1;

	while (size)
	{
		double tmp0 = (array[Hights] - array[Lowest]),
		tmp1 = (value - array[Lowest]);
		THE_FACTOR = (double)(Hights - Lowest) / tmp0 * tmp1;
		Position = (size_t)(Lowest + THE_FACTOR);
		printf("Value checked array[%d]", (int)Position);

		if (Position >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[Position]);
		}

		if (array[Position] == value)
			return ((int)Position);

		if (array[Position] < value)
			Lowest = Position + 1;
		else
			Hights = Position - 1;

		if (Lowest == Hights)
			break;
	}

	return (-1);
}
