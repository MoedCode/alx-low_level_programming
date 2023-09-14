#include "lists.h"
/**
 *print_dlistint - print linked singaly list nodes
 * @h: pointer to first node
 * Return: size_t i whics number of printd  nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *H = h;

	for (i = 0; H; i++)
	{
		printf("%d\n", H->n);
		H = H->next;
	}
	return (i);

}
