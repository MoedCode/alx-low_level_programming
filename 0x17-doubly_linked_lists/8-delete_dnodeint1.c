#include "lists.h"
#include <stddef.h>
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
		return 1;

	if (index == 0)
	{
		tmpH = H;
		H->prev = NULL;
		*head = H->next;
		free(tmpH);
		return 1;
	}

	for (; H; H = H->next, i++)
	{

		if ((H->next == NULL) && (i == index))
		{

			tmpH = H;
			H->prev->next = NULL;
			free(tmpH);

			return 1;
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