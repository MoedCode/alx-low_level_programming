#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: poinyer to pointer to head.
 * Return: (int) value of n.
 */
int pop_listint(listint_t **head)

{
	int n;
	listint_t *tmp;

	if (!*head)
		return (0);

	tmp = (*head)->next;
	n = (*head)->n;

	free((*head));
	*head = tmp;

	return (n);
}

