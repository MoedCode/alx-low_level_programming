#include "lists.h"
/**
 * *add_nodeint - node at the beginning of a listint_t list.
 *
 * @head:ponter pointer of list
 * @n: integer value to be assige for node
 * Return: (listint_t*) pointer to added npde
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (node);

	node->n = n;
	node->next = NULL;

	if (!*head)
		*head = node;
	else
		node->next = *head;
*head = node;
return (node);


}
