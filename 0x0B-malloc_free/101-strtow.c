#include <stdio.h>
#include <stdlib.h>

/**
 * wordCount _ count words in a string  return worf number
 * @str: type char* dtring to be count
 * Return int
*/

int wordCount(char *str)
{
	int words, wrTerm = 0;

	int chars = 0;

	for (; str[chars] != '\0'; chars++)
	{
		if (str[chars] != ' ')
		{
			wrTerm = 1;
		}
		else if (wrTerm)
		{
			words++;
			wrTerm = 0;
		}
	}

	if (wrTerm)
	{
		words++;
	}

	return (words);
}
/**
 * strtow  - splits a string into words.
 * @str: string to split
 * Return char** after split (NULL) in failer
 */
char **strtow(char *str)
{
	int wNum;
	char **words;
	int i, j, k, ln, first, end;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	wNum = wordCount(str);
	if (wNum == 0)
	{
		return (NULL);
	}


	words = malloc((wNum + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}
	for (i = 0, j = 0; str[i] != '\0';)
	{
		while (str[i] == ' ')
		{
			i++;
		}

		first = i;

		while (str[i] != ' ' && str[i] != '\0')
		{
			i++;
		}

		end = i;

		ln = end - first;
		words[j] = malloc((ln + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			return (NULL);
		}

		for (k = 0; k < ln; k++)
		{
			words[j][k] = str[first + k];
		}
		words[j][k] = '\0';

		j++;
	}

	words[j] = NULL;

	return (words);
}
