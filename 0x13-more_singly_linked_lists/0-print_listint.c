#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: pointer to node to start print with
 * Return: (size_t) number of nodes printed by function
 */
size_t print_listint(const listint_t *h)
{
	size_t i = 0;

	if (!h)
		return (0);

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
