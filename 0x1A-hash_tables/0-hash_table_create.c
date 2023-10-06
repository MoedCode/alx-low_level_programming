#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create -  creates a hash table
 * @size:  array size
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtTable;
	unsigned long int i;

	if (!size)
		return (0);
	hashtTable = malloc(sizeof(hash_table_t));
	if (hashtTable == 0)
		return (0);

	hashtTable->size = size;

	hashtTable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashtTable->array == 0)
		return (0);

	for (i = 0; i < size; i++)
		hashtTable->array[i] = 0;

	return (hashtTable);
}
