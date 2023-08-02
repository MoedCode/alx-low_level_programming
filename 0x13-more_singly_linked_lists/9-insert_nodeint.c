#include "lists.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * insert_nodeint_at_index - nsert new node at a specific position in list.
 *
 * @head:pointer to a pointer to the first list node
 * @idx:the index at which to insert the new node
 * @n:(int) value to store in the new node
 * Return: (listint_t*) new added node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t i;
	listint_t *node, *tmp;

	tmp = *head;

	if (idx)
		for (i = 0; i < idx - 1 && tmp; i++)
			tmp = tmp->next;

	if (!tmp && idx)
		return (NULL);

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
	}
	else
	{
		node->next = tmp->next;
		tmp->next = node;
	}

	return (node);
}

