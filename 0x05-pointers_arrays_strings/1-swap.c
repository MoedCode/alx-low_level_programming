#include"main.h"
/**
 * swap_int - swaps the values of two integers.
 *
 * @a: a pointer to a type int
 * @b: a pointer to a type int
 *
 * return: 0 void
 *
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

