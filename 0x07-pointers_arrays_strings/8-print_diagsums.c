#include <stdio.h>

/**
 * print_diagsums - get print sum diagonals square matrix of integers
 * @a: pointer to an intiger array
 * @size: size of the array
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i,  right  = 0, left  = 0;

	for (i = 0; i < size; i++)
	{
		right  += a[i * size + i];
		left  += a[i * size + (size - 1 - i)];
	}

	printf("%i, %i\n", right, left);
}
