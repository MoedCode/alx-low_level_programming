#include"main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: type int[]
 * @n: type int[]
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i = (n - 1), i_ = 0;

	for (; i >= n / 2; i--, i_++)
	{
		int temp = a[i];

		a[i] = a[i_];
		a[i_] = temp;
	}
}
