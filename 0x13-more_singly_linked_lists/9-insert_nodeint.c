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
	/*cuurnt index: i, currnt node pointer: tmp, new node pointer: node */
	size_t i;
	listint_t *node, *tmp;

	if (!*head)
		return (0);
	if (idx == 0)
	{
		node = malloc(sizeof(listint_t));
		if (!node)
			return (0);
		node->n = n;
		node->next = *head;
		*head = node;

	}
	tmp = *head;
	for (i = 0; i < idx - 1 && tmp; i++)
		tmp = tmp->next;
	if (i != idx - 1 || !tmp)
		return (0);
	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = tmp->next;
	tmp->next = node;

	return (node);

}

