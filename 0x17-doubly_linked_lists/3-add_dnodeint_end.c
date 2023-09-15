#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end -  adds a new node at the  end  of
 *a dlistint_t list.
 *
 * @head: pointer to pointer to head
 * @n: new node integer value
 * Return: dlistint_t* new added node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *NODE, *HEAD  = *head;

		if (!head)
			return (NULL);
		if (!*head)
			return (Add_Head(head, n));
	NODE = malloc(sizeof(dlistint_t) * 1);
	if (!NODE)
		return (NULL);
	while (HEAD->next)
		HEAD = HEAD->next;
	/* NRW NODE*/
	NODE->n = n;
	NODE->prev = HEAD;
	NODE->next = NULL;
	/* (*head)->prev = NODE; */
	HEAD->next = NODE;



	return (NODE);
}

