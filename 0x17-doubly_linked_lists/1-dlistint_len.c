#include "lists.h"
/**
 *dlistint_len - return  singaly list length
 * @h: pointer to first node
 * Return: size_t i whics number of  nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;
	const dlistint_t *H = h;

	for (i = 0; H; i++)
	{
		H = H->next;
	}
	return (i);
}

