#include "lists.h"
/**
 * list_len -  return number of nodes in a linked list
 * @h: pointer to first node
 * Return:(i) size_t
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	for (; h;)
	{
		i++;
		h = h->next;
	}
	return (i);
}
