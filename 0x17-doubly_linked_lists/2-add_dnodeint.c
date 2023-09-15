#include "lists.h"

/**
 * Add_Head -  adds a new node
 * with null previous and next filelds
 * @H: a null pointer to an empty list
 * @n: element to be added in the linked list as the new head
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *Add_Head(dlistint_t **H, int n)
{
	dlistint_t *N = malloc(sizeof(dlistint_t));

	if (!N)
		return (NULL);
	N->n = n;
	N->next = NULL;
	N->prev = NULL;
	*H = N;
	return (N);
}
/**
 * add_dnodeint -  adds a new node at the beginning of
 *a dlistint_t list.
 *
 * @head: pointer to pointer to head
 * @n: new node integer value
 * Return: dlistint_t* new added node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *NODE, *HEAD  = *head;

		if (!head)
			return (NULL);
		if (!*head)
			return (Add_Head(head, n));
	NODE = malloc(sizeof(dlistint_t) * 1);
	if (!NODE)
		return (NULL);

	/* NRW NODE*/
	NODE->n = n;
	NODE->prev = NULL;
	NODE->next = HEAD;
	/*HEAD*/
	(*head)->prev = NODE;

	*head = NODE;

	return (NODE);
}

