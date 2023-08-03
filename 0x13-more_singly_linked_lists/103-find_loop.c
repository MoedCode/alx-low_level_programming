#include "lists.h"

/**
 * find_listint_loop - looks for  head node circular linked list.
 * @head: pointer to the head node.
 * Return:  (listint_t) pointer to head node.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmpA = head;
	listint_t *tmpB = head;

	if (head == NULL)
	{
		return (NULL);
	}

	while (tmpA != NULL && tmpB != NULL && tmpB->next != NULL)
	{
		tmpA = tmpA->next;
		tmpB = tmpB->next->next;

		if (tmpB == tmpA)
		{
			tmpA = head;

			while (tmpA != tmpB)
			{

				tmpA = tmpA->next;
				tmpB = tmpB->next;
			}
			return (tmpA);
		}
	}
	return (NULL);
}
