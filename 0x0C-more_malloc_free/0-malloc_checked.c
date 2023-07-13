#include<stdlib.h>

/**
 * malloc_checked - allocate memorry using malloc
 * @b: the size to be allocated by malloc
 * Return: (add) on sccess, exut with (98) on failer
 */
void *malloc_checked(unsigned int b)
{
	void *add =  malloc(b);

	if (add == NULL)
	{
		exit(98);

	}
	return (add);
}
