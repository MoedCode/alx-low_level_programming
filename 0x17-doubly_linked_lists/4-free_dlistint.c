#include "lists.h"

/**
 * free_dlistint -  frees a dlistint_t list.
 * @head:  pointer of the head node.
 * Return: VOID
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
