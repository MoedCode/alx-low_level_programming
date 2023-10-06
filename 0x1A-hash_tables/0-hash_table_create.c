#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create -  creates a hash table
 * @size:  array size
 * Return: pointer to the hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long i;
	hash_table_t *TABLE;

	/*if (size < 1024 || !(TABLE = malloc((sizeof(*TABLE)))));*/
	if (!size)
		return (NULL);
	TABLE = malloc(sizeof(hash_table_t));
	if (!TABLE)
		return (NULL);

	TABLE->size = size;
	TABLE->array = malloc(sizeof(hash_node_t) * size);
	if (!TABLE->array)
	{
		free(TABLE);
		return (NULL);
	}
	for (i = 0; i < TABLE->size; ++i)
		TABLE->array = NULL;

	return (TABLE);



}
