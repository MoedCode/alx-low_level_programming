#include "search_algos.h"

/**
 * custom_search - searches for a value in an array of
 * integers using the Binary search algorithm
 *
 * @arr: input array
 * @sz: size of the array
 * @val: value to search in
 * Return: index of the number
 */
int custom_search(int *arr, size_t sz, int val)
{
	size_t mid = sz / 2, i;

	if (!arr || !sz)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < sz; i++)
		printf("%s %d", (i == 0) ? ":" : ",", arr[i]);

	printf("\n");

	if (mid && sz % 2 == 0)
		mid--;

	if (val == arr[mid])
	{
		if (mid > 0)
			return (custom_search(arr, mid + 1, val));
		return ((int)mid);
	}

	if (val < arr[mid])
		return (custom_search(arr, mid + 1, val));

	mid++;
	return (custom_search(arr + mid, sz - mid, val) + mid);
}

/**
 * advanced_binary - calls to custom_search to return
 * the index of the number
 *
 * @arr: input array
 * @sz: size of the array
 * @val: value to search in
 * Return: index of the number
 */
int advanced_binary(int *arr, size_t sz, int val)
{
	int idx;

	idx = custom_search(arr, sz, val);

	if (idx >= 0 && arr[idx] != val)
		return (-1);

	return (idx);
}
