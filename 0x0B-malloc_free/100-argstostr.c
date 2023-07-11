#include <stdio.h>
#include <stdlib.h>


/**
 * length - returns the length of a string.
 *
 * @s: type char* to claculate its length
 *
 * Return: (s length)
 */

int length(char *s)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
		;
	return (i);
}

/**
 * argstostr -  concatenates all the arguments of  program
 *
 * @ac: length of av
 * @av: 2d Array of type car* "argv[]"
 *
 * Return:a pointer to a new string, or (NULL) if it fails
 */
char *argstostr(int ac, char **av)
{
	char *cnctdtr;
	int i, j, k, ln;

	if (ac == 0 || av == NULL)
		return (NULL);

	ln = 0;
	for (i = 0; i < ac; i++)
	{
		ln += length(av[i]) + 1;
	}
	cnctdtr = malloc((ln + 1) * sizeof(char));

	if (cnctdtr == NULL)
		return (NULL);

	i = k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j <= length(av[i]); j++)
		{
			if (av[i][j] == '\0')
			{
				cnctdtr[k++] = '\n';
				continue;
			}

			cnctdtr[k++] = av[i][j];
		}
	}
	cnctdtr[ln] = '\0';
	return (cnctdtr);
}
