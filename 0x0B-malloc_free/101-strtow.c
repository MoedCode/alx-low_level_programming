#include <stdio.h>
#include <stdlib.h>

/**
 * wordCount - count words in a string  return worf number
 * @str: type char* dtring to be count
 * Return: int
*/

int wordCount(char *str)
{
	int words, chars;

for (chars = words = 0; str[chars] != '\0'; chars++)
{

	if ((str[chars] != ' ' &&  str[chars + 1] == ' ') || (str[chars + 1] == '\0'))
	{
		words++;
	}
}

	return (words - 1);
}
/**
 * free_grid- free allocated memory fro  2d arry.
 *
 * @grid: pointer to allocated memory
 * @height: te pointer of  hight,
 *
 * Return: void
 */

void free_grid(char **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}
/**
 * strtow  - splits a string into words.
 * @str: string to split
 * Return: char** after split (NULL) in failer
 */
char **strtow(char *str)
{
	int wNum, i, j, b, c;
	char **words;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wNum = wordCount(str);
	if (wNum == 0)
		return (NULL);
	words = malloc((wNum) * sizeof(char *));
	if (words == NULL || wNum == 0)
	{
		free(words);
		return (NULL);
	}
	for (i = b = 0; i < wNum; i++)
	{
		for (c = b; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				b++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				words[i] = malloc((c - b + 2) * sizeof(char));
				if (words[i] == NULL)
				{
					free_grid(words, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; b <= c; b++, j++)
			words[i][j] = str[b];
		words[i][j] = '\0';
	}
	words[i] = NULL;
	return (words);
}
