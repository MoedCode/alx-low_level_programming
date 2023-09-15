#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h:double pointer to Hrad node
 * @idx: the given position
 * @n:inter value all node data
 * Return: dlistint_t* momory address of  added node,
 *(NULL) if it fail to add node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t i;
	dlistint_t *H = *h, *midNode;

	if (!*h)
		return (NULL);
	for (i = 0; H; i++, H = H->next)
	{
		if (i == idx)
		{
			midNode = malloc(sizeof(dlistint_t));
			if (!midNode)
				return (NULL);
			midNode->n = n;
			midNode->next = H->next;
			midNode->prev = H->prev;
			H->prev = H->prev->prev;
			H->next = midNode;
			break;
		}

	}

	if (idx > i)
		return (NULL);

	return (midNode);
}
