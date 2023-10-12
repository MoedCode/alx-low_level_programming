#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the new sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	if (!size)
		return (NULL);

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (!ht->array)
		return (NULL);

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the hash table's array.
 * @ht: Pointer to the hash table.
 * @key: Key of the hash table array, which is an
 * array of nodes where each node is a key-value pair.
 * @value: Value associated with the key.
 *
 * Return: (1) if succeeded, (0) for any failure.
 */


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *cur_node, *new_node;
	unsigned long int hashIdx;

	if (!ht || !ht->array || !ht->size || !key || !value)
		return (0);

	hashIdx = key_index((unsigned char *)key, ht->size);

	for (cur_node = ht->shead; cur_node; cur_node = cur_node->next)
	{
		if (strcmp(key, cur_node->key) == 0)
		{
			free(cur_node->value);
			cur_node->value = strdup(value);
			return (1);
		}
	}

	new_node = malloc(sizeof(*new_node));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (!new_node->key || !new_node->value)
	{
		free(new_node->key);
		free(new_node->value);
		return (0);
	}

	new_node->next = ht->array[hashIdx];
	ht->array[hashIdx] = new_node;

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
	}

	return (1);
}

/**
 * shash_table_get - Retrieve the value associated with
 *                   a key in a sorted hash table.
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int hashIdx;
	shash_node_t *node;

	if (!ht || !key || key[0] == '\0')
		return (NULL);

	hashIdx = key_index((unsigned char *)key, ht->size);
	if (hashIdx >= ht->size)
		return (NULL);

	for (node = ht->shead; node && strcmp(node->key, key) != 0;
		node = node->snext)
		;

	return ((node == NULL) ? NULL : node->value);
}

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: A pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = ht->shead;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->snext;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: A pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (!ht)
		return;

	node = ht->stail;
	printf("{");
	while (node != NULL)
	{
		printf("'%s': '%s'", node->key, node->value);
		node = node->sprev;
		if (node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
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
