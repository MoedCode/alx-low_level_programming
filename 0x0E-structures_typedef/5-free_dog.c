#include"dog.h"
#include<stdlib.h>
/**
 * free_dog - free allocated  memory block object struct
 *
 * @d:struct to free
 *
 * Return: (void)
 */
void free_dog(dog_t *d)
{
	if (d)
	{

	if ((*d).name != NULL)
		free((*d).name);

	if ((*d).owner != NULL)
		free((*d).owner);
	free(d);
	}
}
