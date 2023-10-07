#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: pointer The hash table to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	size_t i;
	hash_node_t *cur_node, *temp;

	for (i = 0; i < ht->size; i++)
	{
		for (cur_node = ht->array[i]; cur_node; cur_node = cur_node->next)
		{
			temp = cur_node;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);

}
