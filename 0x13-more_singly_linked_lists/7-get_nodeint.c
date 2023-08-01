#include "lists.h"
#include <stddef.h>

/**
 * get_nodeint_at_index - Get the crosponding  node int at
 * cuurnt index
 *
 * @head:pointer to first node in the list
 * @index: int value to compare node index with
 * Return: (listint_t*) node wich its index = (index)
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t i = 0;
	listint_t *tmp;

	if (!head)
		return (head);

	tmp = head;

		while (tmp)
		{
			if (i < index)
			{
				i++;
				tmp = tmp->next;
			}
			else if (i == index)
				return (tmp);
			else
				return (0);
		}
		return (0);
}

