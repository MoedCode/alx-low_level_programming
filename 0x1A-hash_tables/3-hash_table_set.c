#include "hash_tables.h"
#include <stddef.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int hashIdx;

	if (!ht || !ht->array || !ht->size || !key || !key[0])
		return (0);
	hashIdx = key_index((unsigned char *)key, ht->size);




}
