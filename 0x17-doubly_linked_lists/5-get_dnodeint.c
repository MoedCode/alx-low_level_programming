#include "lists.h"
#include <stddef.h>
/**
 * get_dnodeint_at_index -  Return node number that = index
 * @head: pointer to first node
 * @index:integer value to compare node number with
 * Return: dlistint_t* node which is its number = index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *H = head;

	for (i = 0; H; i++, H = H->next)
	{
		if (i == index)
		{
			return (H);
		}
	}
	return (NULL);
}
