#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * string_nconcat - concatenates s1,s2  in a in  BigS using malloc.
 * @s1: char * first string
 * @s2:  char * second  string
 * @n: second string length
 * Return:  (pointer) for BigS , (NULL) on falier
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int  i, j, k, ln1;
	char *BigS;

	i = j = k = ln1 = 0;
	/*checking s1 && s2 are not opinting NULL*/
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
		/* get s1 length*/
	for (; s1[ln1] != '\0'; ln1++)
		;
	/*Allocating space for Big S*/
	BigS = malloc((ln1 + n + 1) * sizeof(char));
	if (BigS == NULL)
		return (BigS);
	for (; i < ln1; i++)
		BigS[i] = s1[i];
	for (j = ln1; k < n; j++)
	{
		BigS[j] = s2[k];
		k++;
	}
	BigS[ln1 + n] = '\0';
	return (BigS);


}

