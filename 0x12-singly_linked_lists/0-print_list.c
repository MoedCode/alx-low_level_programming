#include "lists.h"
#include <stddef.h>
/**
 *print_list  - prints all the elements of a list_t list.
 * @h: type list_t , the list to print
 *Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	for (; h != NULL;)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
	i++;
	h = h->next;

	}
	return (i);
}
