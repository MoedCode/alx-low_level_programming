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
	size_t i;
	dlistint_t *tmpH, *H = *head;

		if (*head == NULL)
			return (1);
		if (index == 0)
		{
			tmpH = H;
			H->prev = NULL;
			*head = H->next;
			free(tmpH);
			return (1);

		}
	for (i = 0; H; i++, H = H->next)
	{

		if (index == i)
		{
			tmpH = H;
			H->prev->next = H->next;
			H->next->prev = H->prev;
			free(tmpH);
			return (1);
		}
		if (!H->next && i == index)
		{
			tmpH = H;
			H->prev->next = NULL;
			free(tmpH);
			return (1);
		}
	}
	return (-1);

}
