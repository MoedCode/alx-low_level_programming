#include "search_algos.h"
#include <math.h>

/**
 * jump_list - searches for a value in an array of
 * integers using the Jump search algorithm
 *
 * @list: input list
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t block_size, jump, current_index;
	listint_t *prev_node;

	if (list == NULL || size == 0)
		return (NULL);

	block_size = (size_t)sqrt((double)size);
	current_index = 0;
	jump = 0;

	do {
		prev_node = list;
		jump++;
		current_index = jump * block_size;

		while (list->next && list->index < current_index)
			list = list->next;

		if (list->next == NULL && current_index != list->index)
			current_index = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)current_index, list->n);

	} while (current_index < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev_node->index, (int)list->index);

	for (; prev_node && prev_node->index <= list->index; prev_node = prev_node->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev_node->index, prev_node->n);
		if (prev_node->n == value)
			return (prev_node);
	}

	return (NULL);
}
