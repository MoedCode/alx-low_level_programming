#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create -  creates a hash table
 * @size:  array size
 * Return: pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtTable = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hashtTable == NULL)
		return (NULL);

	hashtTable->size = size;

	hashtTable->array = malloc(sizeof(hash_node_t *) * size);

	if (hashtTable->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hashtTable->array[i] = NULL;

	return (hashtTable);
}
