#include "main.h"
#include <stdlib.h>
/**
 * free_grid- free allocated memory fro  2d arry.
 *
 * @grid: pointer to allocated memory
 * @height: te pointer of  hight,
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
