#include "hash_tables.h"
#include "hash_tables.h"
/**
 * key_HashIdx - gives the HashIdx of a key.
 * @key: key to find its HashIdx.
 * @size: the  array size.
 * Return: key HashIdx
 */

unsigned long int key_HashIdx(const unsigned char *key, unsigned long int size)
{
	unsigned long int HashIdx = hash_djb2(key);

	return (HashIdx % size);
}
