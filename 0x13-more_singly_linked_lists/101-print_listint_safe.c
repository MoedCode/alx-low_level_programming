#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to first node
 * Return: (size_t) number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
listint_t *tmp;
size_t i = 0;

	if (!head)
		exit(98);

tmp = (listint_t *)head;
while (tmp)
{
	printf("[%p] %d\n", (void *)tmp, tmp->n);

	if (tmp > tmp->next)
	{
		i++;
		tmp = tmp->next;
	}
	else
	{
		printf("-> [%p] %d\n", (void *)tmp->next, tmp->next->n);
		i++;
		break;
	}
}
	return (i);
}

