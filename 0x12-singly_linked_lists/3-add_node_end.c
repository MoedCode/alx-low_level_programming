#include "lists.h"
#include <stddef.h>
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to pointer forst node list
 * @str: wanted string to be added
 * Return: (pointer) to node_, (null) on failure
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t strLen;
	list_t *tail, *node_;
	char *str_;

	str_ = strdup(str);

	for (strLen = 0; str[strLen] != '\0'; strLen++)
		;
	node_ = malloc(sizeof(list_t));
	if (node_ == NULL)
		return (node_);

	if (str == NULL)
	{
		free(node_);
		return (NULL);
	}

	node_->str = str_;
	node_->len = strLen;
	node_->next = NULL;

	if (*head == NULL)
		*head = node_;
	else
	{
		tail = *head;

		while (tail->next != NULL)
			tail = tail->next;
		tail->next = node_;
	}

	return (*head);
}
