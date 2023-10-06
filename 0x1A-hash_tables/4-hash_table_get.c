#include "hash_tables.h"
/**
 * hash_table_get - get the value by a given key.
 * @ht: pointer to hash table
 * @key: key to look for
 * Return: (the value) associated with the key
 * or (0) if key couldn’t be found or any error
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *cur_node;

	if (!ht || !key || key[0] == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);

	for (cur_node = ht->array[index]; cur_node; cur_node = cur_node->next)
	{
		if (strcmp(cur_node->key, key) == 0)
			return (cur_node->value);

	}
	return (0);
}
