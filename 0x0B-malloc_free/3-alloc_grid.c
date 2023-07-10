#include <stdlib.h>
/**
 * alloc_grid - create allocate 2d array, assign (0) to al indexs
 * @height: **Array hight
 * @width: *array width
 * Return:  **Array
 */

int **alloc_grid(int width, int height)
{
	int h = 0, w = 0, **Array;
			/*aloocate space for array height */
	Array = malloc(height * sizeof(int *));

	/*if wiidth and height parmeter or no space allocated return null*/
	if (height <= 0 || width <= 0 || Array == NULL)
	{
		free(Array);
		return (NULL);
	}
	for (; h < height; h++)
	{
		Array[h] = malloc(width * sizeof(int));
		if (Array[h] == NULL)
		{
			int tmp = h;

			h = 0;
			for (; h <= tmp; h++)
			{
				free(Array[h]);
			}
			free(Array);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			Array[h][w] = 0;
		}
	}

	return (Array);
}
