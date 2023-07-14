#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb:  allocates memory for an array
 * @size: size of the element  *
 * Return: a pointer to  allocated memory
 */

void *_calloc(int nmemb, int size)
{
	int i;
	void *pointer;

	if (size == 0 || nmemb == 0)
		return (NULL);

	pointer = malloc(nmemb * size);
	if (pointer == NULL)
		return (pointer);

	for (i = 0; i < nmemb * size; i++)
		((char *)pointer)[i] = 0;


	return (pointer);
}
