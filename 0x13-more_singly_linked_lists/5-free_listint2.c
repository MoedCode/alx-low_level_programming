#include "lists.h"

/**
 *free_listint2 - frees a listint_t list.
 * @head: pointer to pointer to first node
 * Return: (void)
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp, *head_ = *head;

	while (head_)
	{
		tmp = head_->next;
		free(head_);
		head_ = tmp;
	}
}
