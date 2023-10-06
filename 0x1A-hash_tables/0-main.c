#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{

	int i;
	hash_table_t *ht;

	ht = hash_table_create(1024);
	printf("%p\n", (void *)ht);
	for(i = 0; i < 1024; i++)
		if(ht->array[i])
			{
				free(ht->array[i]);
				ht->array[i] = NULL;
			}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
	return 0;
}