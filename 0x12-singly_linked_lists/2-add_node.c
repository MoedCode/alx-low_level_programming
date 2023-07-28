#include "lists.h"
#include <stddef.h>
/**
 * add_node -adds a new node at the beginning of a list_t list
 *then copy the  string in first node in linked list.

 *  @head: pointer to a pointer first node.
 *  @str: Tgiven  string  copy in  the new node.
 *
 * Return:(pointer) to new node On success,
 * (NULL), On failure.
*/

list_t *add_node(list_t **head, const char *str)
{
	size_t strLen;
	char *str_;
	list_t *node_;


	for (strLen = 0; str[strLen] != '\0'; strLen++)
		;

	node_ = malloc(sizeof(list_t));
	if (node_ == NULL)
		return (node_);

	str_ = strdup(str);

	if (str_ == NULL)
	{
		free(node_);
		return (NULL);
	}

	node_->str = str_;
	node_->len = strLen;
	node_->next = *head;
	*head = node_;

	return (node_);
}
