#include "hash_tables.h"
#include <stddef.h>

/**
 * hash_table_set - Adds an element to the hash table's array.
 * @ht: Pointer to the hash table.
 * @key: Key of the hash table array, which is an
 * array of nodes where each node is a key-value pair.
 * @value: Value associated with the key.
 *
 * Return: (1) if succeeded, (0) for any failure.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *cur_node, *new_node;
	unsigned long int hashIdx;

	if (!ht || !ht->array || !ht->size || !key || !value)
		return (0);
	hashIdx = key_index((unsigned char *)key, ht->size);
	/* Check if the key already exists */
	for (cur_node = ht->array[hashIdx]; cur_node; cur_node = cur_node->next)
	{
		if (!strcmp(key, cur_node->key))
		{
			free(cur_node->value);
			cur_node->value = strdup(value);
			return (1);
		}
	}
	/* If the key does not exist previously */
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		if (new_node->value)
			free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[hashIdx];
	ht->array[hashIdx] = new_node;

	return (1);
}
