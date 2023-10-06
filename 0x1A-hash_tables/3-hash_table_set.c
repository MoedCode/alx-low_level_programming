#include "hash_tables.h"
#include <stddef.h>
/**
 * hash_table_set - adds an element the hash tables array
 * @ht: pointer to hash table
 * @key: key that of hash table arrray, which is
 * array of nodes each node is key vale peers
 * @value: associated with the key.
 * Return: Returns: (1)  succeeded, (0) for any failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (!ht || !ht->array || !ht->size || !key  || !value)
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	current_node = ht->array[index];

	/* Check if key already exists, update the value if so */
	while (current_node)
	{
		if (strcmp(current_node->key, key) == 0)
		{
			free(current_node->value);  /* Free the existing value */
			current_node->value = strdup(value);  /* Duplicate the new value */
			if (!current_node->value)
				return (0);
			return (1);
		}
		current_node = current_node->next;
	}

	/* Create a new node and insert it at the beginning of the list */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);

}
