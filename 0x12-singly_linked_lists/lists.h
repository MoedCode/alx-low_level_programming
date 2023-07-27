#ifndef LISTS_H
#define LISTS_H

/*includes*/
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/* structs */
/**
 * struct list_s - struct for linked list
 * @str: char* first element in linked list
 * @len:int  second element in linked list
 * @next: pointer third element in linked list
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;

} list_t;

/*proto types*/

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);

#endif
