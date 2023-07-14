#include <stdlib.h>
/**
 * _realloc -reallocates a memory using malloc and free.
 * @ptr:void pointer to allocated memmory previously.
 * @old_size: size, of prvoiusly allocated space in byets.
 * @new_size: new size  of new allocated memory
 * Return: (pointer) for a new allocated space
 * (NULL) in flaier.
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
