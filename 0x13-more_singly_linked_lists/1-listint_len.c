#include "lists.h"

/**
 * listint_len - returns the number of elements in given list.
 * @h: pointer for node stat count from
 * Return: (size_t) number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);
	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}
