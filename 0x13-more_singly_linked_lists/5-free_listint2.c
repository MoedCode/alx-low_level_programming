#include "lists.h"
#include "lists.h"

/**
 *free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to first node
 * Return: (void)
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	while ((*head))
	{
		tmp = (*head)->next;
		free(*head);
		(*head) = tmp;
	}
	(*head) = NULL;
}

