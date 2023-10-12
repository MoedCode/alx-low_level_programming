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
 * @size: The size of the newNode sorted hash table.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the newNode sorted hash table.
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

/*
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *cur_node, *newNode_node;
	char *_value;
	unsigned long int hashIdx;

	if (!ht || !ht->array || !ht->size || !key || !value)
		return (0);
	_value = strdup(value);
	if (_value)
		return (0);

	hashIdx = key_index((unsigned char *)key, ht->size);

	for (cur_node = ht->shead; cur_node; cur_node = cur_node->next)
	{
		if (strcmp(key, cur_node->key) == 0)
		{
			free(cur_node->value);
			cur_node->value = _value;
			return (1);
		}
	}

	newNode_node = malloc(sizeof(shash_node_t));
	if (!newNode_node)
	{
		free(_value);
		return (0);
	}

	newNode_node->key = strdup(key);
	if (!newNode_node->key)
	{
		free(newNode_node);
		free(_value);
		return (0);
	}

	newNode_node->value = _value;
	newNode_node->next = ht->array[hashIdx];
	ht->array[hashIdx] = newNode_node;


	if (!ht->shead)
	{
		newNode_node->sprev = NULL;
		newNode_node->snext = NULL;
		ht->shead  = newNode_node;
		ht->stail = newNode_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newNode_node->sprev = NULL;
		newNode_node->snext = ht->shead;
		ht->shead->sprev = newNode_node;
		ht->shead = newNode_node;
	}
	else
	{
		for (cur_node = ht->shead; cur_node && strcmp(ht->shead->key, key) > 0;
			cur_node = cur_node->snext)
			;

		newNode_node->sprev = cur_node;
		newNode_node->snext = cur_node->snext;

		if (!cur_node->snext)
			ht->stail = newNode_node;
		else
			cur_node->snext->sprev = newNode_node;
		cur_node->snext = newNode_node;
	}

	return (1);
}
*/


int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newNode, *tmp;
	char *_value;
	unsigned long int hashIdx;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	_value = strdup(value);
	if (_value == NULL)
		return (0);

	hashIdx = key_index((const unsigned char *)key, ht->size);

	for (tmp = ht->shead; tmp;  tmp = tmp->snext;)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = _value;
			return (1);
		}

	}

	newNode = malloc(sizeof(shash_node_t));
	if (newNode == NULL)
	{
		free(_value);
		return (0);
	}
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(_value);
		free(newNode);
		return (0);
	}
	newNode->value = _value;
	newNode->next = ht->array[hashIdx];
	ht->array[hashIdx] = newNode;

	if (ht->shead == NULL)
	{
		newNode->sprev = NULL;
		newNode->snext = NULL;
		ht->shead = newNode;
		ht->stail = newNode;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		newNode->sprev = NULL;
		newNode->snext = ht->shead;
		ht->shead->sprev = newNode;
		ht->shead = newNode;
	}
	else
	{
		tmp = ht->shead;
		while (tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0)
			tmp = tmp->snext;
		newNode->sprev = tmp;
		newNode->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = newNode;
		else
			tmp->snext->sprev = newNode;
		tmp->snext = newNode;
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
