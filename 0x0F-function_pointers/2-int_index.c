/**
 * int_index -  searches for an integer
 *
 * @array: array to search in
 * @size:array  size
 * @cmp: comparesion function
 *
 * Return: (-1) on Error,else (int)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

return (-1);
}

