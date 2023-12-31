#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create -  creates a hash table
 * @size:  array size
 * Return: pointer to the hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *hashtTable;
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
	hashtTable->shead = NULL;
	hashtTable->stail = NULL;
	return (hashtTable);
}
/*===========================================*/
/*===========================================*/
/**
 * shash_table_set - Adds an element to the hash table's array.
 * @ht: Pointer to the hash table.
 * @key: Key of the hash table array, which is an
 * array of nodes where each node is a key-value pair.
 * @value: Value associated with the key.
 *
 * Return: (1) if succeeded, (0) for any failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *cur_node, *new_node;
	unsigned long int hashIdx;
	/* parameter  Checking */
	if (!ht || !ht->array || !ht->size || !key || !value)
		return (0);
	/*  Hshing */
	hashIdx = key_index((unsigned char *)key, ht->size);
	/* Check if the key already exists */
	for (cur_node = ht->array[hashIdx]; cur_node; cur_node = cur_node->next)
	{
		if (!strcmp(key, cur_node->key))
		{
			free(cur_node->value);
			cur_node->value = strdup(value);
			return (1);
		}
	}
	/* If the key does not exist previously */
	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		if (new_node->value)
			free(new_node->value);
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[hashIdx];
	ht->array[hashIdx] = new_node;

	/* handle sorted linked list queue */
	if (!ht->shead)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		new_node->snext = NULL;
		new_node->sprev = NULL;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;

	}
	else
	{
	for (cur_node = ht->shead; cur_node && strcmp(ht->shead->key, key) > 0;
		cur_node = cur_node->snext)
		;
	new_node->sprev = cur_node;
	new_node->snext = cur_node->snext;

	if (!cur_node->snext)
		ht->stail = new_node;
	else
		cur_node->snext->sprev = new_node;
	cur_node->snext = new_node;

	return (1);

	}

	return (1);
}

/**
 * shash_table_get - get the value by a given key.
 * @ht: pointer to hash table
 * @key: key to look for
 * Return: (the value) associated with the key
 * or (0) if key couldn’t be found or any error
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hashIdx;
	shash_node_t *cur_node;

	if (!ht || !key || key[0] == '\0')
		return (0);
	hashIdx = key_index((unsigned char *)key, ht->size);
	if (hashIdx >= ht->size)
		return (NULL);

	for (cur_node = ht->shead; cur_node && !strcmp(cur_node->key, key);
		cur_node = cur_node->snext)
		;

	return ((!cur_node) ? NULL : cur_node->value);
}

/**
 * shash_table_print - prints   sorted hash table "Queues"
 * @ht: pointer to the hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht || ht->shead)
		return;
	putchar('{');
	for (node = ht->shead; node; node = node->snext)
	{
		printf("'%s' : '%s'", node->key, node->value);
		if (node)
			printf(", ");
	}
	printf("}\n");

}
/**
 * shash_table_print - prints   sorted hash table "Queues"
 * in reversed order or "as stack"
 * @ht: pointer to the hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht || ht->shead)
		return;
	putchar('{');
	for (node = ht->stail; node; node = node->sprev)
	{
		printf("'%s' : '%s'", node->key, node->value);
		if (node)
			printf(", ");
	}
	printf("}\n");

}
/**
 * shash_table_delete - Deletes a sorted hash table "Queues".
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *_ht = ht;
	shash_node_t *tmp, *node;

	for (node = ht->shead; node; tmp = node->next)
	{
		free(node->key);
		free(node->value);
		free(node);
		node = tmp;
	}
	free(_ht->array);
	free(_ht);

}
