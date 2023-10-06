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

	if (!ht || !ht->array || !ht->size)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (!ht->array[i] || !ht->array[i]->key)
			continue;

		for (cur_node = ht->array[i]; cur_node; cur_node = cur_node->next)
		{

			printf("\'%s\':", ht->array[i]->key);
			printf("\'%s\'", ht->array[i]->value);
		}

		if (i < ((ht->size) - 1))
		{
			putchar(',');
			putchar(' ');

		}
	}
	printf("}\n");

}
