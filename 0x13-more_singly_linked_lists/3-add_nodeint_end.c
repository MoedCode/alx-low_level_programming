#include "lists.h"
/**
 * add_nodeint_end - node at the end of a listint_t list.
 *
 * @head:ponter pointer of list
 * @n: integer value to be assige for node
 * Return: (listint_t*) pointer to added npde
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *node, *tmp;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (node);


	node->n = n;
	node->next = NULL;

	if (!*head)
		*head = node;

	else
		{
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
		}

return (node);

}
