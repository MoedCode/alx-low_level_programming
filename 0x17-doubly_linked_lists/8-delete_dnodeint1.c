#include "lists.h"
#include <stddef.h>

/**
 * delete_dnodeint_at_index - delet a  node at a given position
 *
 * @head:double pointer to Hrad node
 * @index: the given position
 * Return:(-1) if cant delet node , else (1)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	size_t i = 0;
	dlistint_t *H = *head, *tmpH;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		/* in all cases make list pointer point node1*/
		(*head)  = H->next;
		/*split node0 from list*/
		H->prev = NULL;
		/* if index=0 and list lenth > 1*/
		if (H->next)
		{
			/* node 0 will be deletd so   node1 ▶ node 0*/
			/* make node1 prev = NULL */
			H->next->prev = NULL;
		}
			/* deleting node 0*/
			free(H);
		return 1;
	}

	for (; H; H = H->next, i++)
	{

		if ((H->next == NULL) && (i == index))
		{

			// tmpH = H;
			H->prev->next = NULL;
			free(H);

			return 1;

			/*
			[   ]
			|
			[   ]
			*/
		}

		if (i == index)
		{

			tmpH = H;

			H->prev->next = H->next;
			H->next->prev = H->prev;
			free(tmpH);
			return (1);
		}
	}
	return -1;
}