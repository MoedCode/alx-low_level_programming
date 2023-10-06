#include "hash_tables.h"
#include "hash_tables.h"
/**
 * key_index - gives the index of a key.
 * @key: key to find its index.
 * @size: the  array size.
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);

	return (index % size);
}
