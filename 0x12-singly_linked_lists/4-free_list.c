#include "lists.h"

/**
 * free_list -  Frees a linked list
 * @head:pointer to first node in linked list
 * Return: (void)
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;

		free(head->str);
		free(head);

		head = tmp;
	}
}
