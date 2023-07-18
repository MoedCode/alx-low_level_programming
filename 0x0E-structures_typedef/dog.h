#ifndef DOG_OBJ_H
#define DOG_OBJ_H

/**
 * struct dog - structed object for dog data
 *@name: dog name
 *@age: dog age
 *@owner: dog owner
*/
struct dog
{
	char *name;

	float age;

	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);

#endif
