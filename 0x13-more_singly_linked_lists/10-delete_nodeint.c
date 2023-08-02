#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes nodes with givin
 *index of a list  from tipe list linked listint_t
 *
 * @head: (double) to first node
 * @index: (int)index of the node to delete
 *
 * Return: (1) on succeeded, (-1) on failer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp0, *tmp1;
	size_t i;

	if (!head || !*head)
		return (-1);

	tmp1 = *head;

	if (!index)
	{
		*head = tmp1->next;
		free(tmp1);
		return (1);
	}
	for (i = 0; i < index && tmp1; i++)
	{
		tmp0 = tmp1;
		tmp1 = tmp1->next;
	}
	if (!tmp1)
		return (-1);
	tmp0->next = tmp1->next;
	free(tmp1);

	return (1);

}

