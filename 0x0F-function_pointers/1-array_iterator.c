#include <stddef.h>
#include <stdio.h>
/**
 * array_iterator -  executes a function (action)
 *given as a parameter on each element of an array
 *
 * @array: array to pass its indexes
 * @size: size of array
 * @action: function to be call
 *
 *Return: (void)
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action != NULL && array != NULL && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
