#include"dog.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * new_dog - condtructor function that construct new dog return pointer to it .
 *
 * @name:dogo name
 * @age: dogo age
 * @owner: dogo owner
 * Return: new dogo structer (pointer)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogObj = malloc(sizeof(dog_t));

	if (dogObj == NULL)
		return (NULL);

	(*dogObj).name = malloc((strlen(name) + 1) * sizeof(char));
	if ((*dogObj).name == NULL)
	{
		free(dogObj);
		return (NULL);
	}

		strcpy((*dogObj).name, name);
		(*dogObj).age = age;


		(*dogObj).owner = malloc((strlen(owner) + 1) * sizeof(char));
		if ((*dogObj).owner == NULL)
		{
			free((*dogObj).name);
			free(dogObj);
			return (NULL);
		}
		strcpy((*dogObj).owner, owner);

		return (dogObj);
}
