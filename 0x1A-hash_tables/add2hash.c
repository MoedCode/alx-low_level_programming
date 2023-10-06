#include "hash_tables.h"
#include <string.h>

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	hash_node_t *cur_node, *new_node;
	unsigned long int hashIdx;
	if (!ht || !ht->array || !ht->size || !key  || !value)
		return (0);
	hashIdx = key_index((unsigned char *)key, ht->size);
	;
	/* incase of key  is allready wxsist*/
	for (cur_node = ht->array[hashIdx]; cur_node->next; cur_node = cur_node->next)
	{
		if(!strcmp(key, cur_node->key))
		{
			free(cur_node->value);
			cur_node->value = strdup(value);
			return (1);
		}
	}
	/*if key does not exsist previously*/
	new_node =(hash_node_t*)malloc(sizeof(*new_node));
			if(!new_node)
				return (0);
	new_node->key = strdup(key);
	new_node->value=strdup(value);
	if(!new_node->key || !new_node->value)
	{
		if(new_node->key)
			free(new_node->key);
		if(new_node->value)
			free(new_node->value);
	return (0);
	}

	new_node->next = ht->array[hashIdx];
	ht->array[hashIdx] = new_node;

	return (1);
}