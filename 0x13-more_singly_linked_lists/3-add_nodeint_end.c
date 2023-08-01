#include "lists.h"
/**
 * add_nodeint - node at the end of a listint_t list.
 *
 * @head:ponter pointer of list
 * @n: integer value to be assige for node
 * @return (listint_t*) pointer to added npde
 */
 listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *node, *tmp;

	if (!*head)
		*head = node;

	node = malloc(sizeof(listint_t));
	if(!node)
		return (node);

	node->n = n;
	node->next = NULL;

	if (!*head)
		*head = node;
	else
		{
		 while (tmp->next)
			tmp = tmp->next;
		tmp->next = node;
		}
*head = node;
return (node);


}
