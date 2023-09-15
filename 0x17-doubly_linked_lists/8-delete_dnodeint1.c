#include "lists.h"
#include <stddef.h>

/**
 * delete_dnodeint_at_index - delete a node at a given position
 *
 * @head: double pointer to head node
 * @index: the given position
 * Return: (-1) if can't delete node, else (1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *H = *head, *tmpH;

	if (*head == NULL)
		return -1;

	if (index == 0)
	{
		*head = H->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(H);
		return 1;
	}

	while (H != NULL)
	{
		if (i == index)
		{
			tmpH = H;
			H->prev->next = H->next;
			if (H->next != NULL)
				H->next->prev = H->prev;
			free(tmpH);
			return 1;
		}
		H = H->next;
		i++;
	}
	return -1;
}