#include "lists.h"
/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer to pointer of the head node.
 * Return: (size_t) number of freed list nodes
 */
size_t free_listint_safe(listint_t **h)
{
	size_t list_len = 0;

	listint_t *tmp;

	tmp = *h;

	while (tmp != NULL)
	{
		listint_t *next = tmp->next;

		if (tmp > next)
		{
			free(tmp);
			tmp = next;
			list_len++;
		}
		else
		{
			free(tmp);
			list_len++;
			break;
		}
	}
	*h = NULL;
	return (list_len);
}

