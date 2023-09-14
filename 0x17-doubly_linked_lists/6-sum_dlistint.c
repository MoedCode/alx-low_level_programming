#include "lists.h"
#include <stddef.h>
/**
 *sum_dlistint - returns the sum of all the data
 * (n) of a dlistint_t linked list.
 *
 * @head: pointer to the head of the list
 * Return: (int) 0 if list is empty, else (n)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	size_t i;
	dlistint_t *H = head;

	for (i = 0; H; i++, H = H->next)
	{
		sum += H->n;
	}
	return (sum);
}




