#include "lists.h"
/**
 * reverse_listint- reverses a listint_t linked list
 * @head: pointer to pointer to first node
 * Return: ( listint_t*) pointer to least afrer revers
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t  *before = NULL, *tmp;

	tmp = *head;

	while (tmp)
	{
		*head = tmp;
		tmp = tmp->next;
		(*head)->next = before;
		before = *head;
	}
	return (*head);

}



