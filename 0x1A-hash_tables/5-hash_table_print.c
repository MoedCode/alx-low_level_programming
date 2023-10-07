#include "hash_tables.h"
#include <stddef.h>
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: pointer to the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i;
	hash_node_t *cur_node;
	int printed = 0;  /* Track whether anything has been printed */

	if (!ht || !ht->array || !ht->size)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i] || !ht->array[i]->key)
			continue;

		for (cur_node = ht->array[i]; cur_node; cur_node = cur_node->next)
		{
			if (printed)
				printf(", ");  /* Add a comma and space before the key-value pair */
			printf("'%s': '%s'", cur_node->key, cur_node->value);
			printed = 1;  /* Set to 1 to indicate that something has been printed */
		}
	}
	printf("}\n");
}
