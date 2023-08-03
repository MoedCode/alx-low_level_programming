#include "lists.h"

/**
 * looped_listint_count - frees a linked list
 * @head: head of a list.
 * Return: (void).
*/
size_t looped_listint_count(listint_t *head)
{
	listint_t *tmp, *currnt;
	size_t cntNode = 1;

	if (!head  || !head->next)
		return (0);

	tmp = head->next;
	currnt = (head->next)->next;

	while (currnt)
	{
		if (tmp == currnt)
		{
			tmp = head;
			while (tmp != currnt)
			{
				cntNode++;
				tmp = tmp->next;
				currnt = currnt->next;
			}

			tmp = tmp->next;
			while (tmp != currnt)
			{
				cntNode++;
				tmp = tmp->next;
			}

			return (cntNode);
		}

		tmp = tmp->next;
		currnt = (currnt->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to first node
 * Return: (size_t) number of cntNode in the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t cntNode, currnt;

	cntNode = looped_listint_count(*h);

	if (!cntNode)
	{
		for (; h != NULL && *h != NULL; cntNode++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (currnt = 0; currnt < cntNode; currnt++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (cntNode);
}


