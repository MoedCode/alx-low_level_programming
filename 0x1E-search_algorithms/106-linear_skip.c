#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @skip_list: input list
 * @target_value: value to search for
 * Return: node containing the target value
 */
skiplist_t *linear_skip(skiplist_t *skip_list, int target_value)
{
	skiplist_t *current_node;

	if (skip_list == NULL)
		return (NULL);

	current_node = skip_list;

	do {
		skip_list = current_node;
		current_node = current_node->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)current_node->index, current_node->n);
	} while (current_node->express && current_node->n < target_value);

	if (current_node->express == NULL)
	{
		skip_list = current_node;
		while (current_node->next)
			current_node = current_node->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)skip_list->index, (int)current_node->index);

	while (skip_list != current_node->next)
	{
		printf("Value checked at index [%d] = [%d]\n",
		(int)skip_list->index, skip_list->n);
		if (skip_list->n == target_value)
			return (skip_list);
		skip_list = skip_list->next;
	}

	return (NULL);
}
