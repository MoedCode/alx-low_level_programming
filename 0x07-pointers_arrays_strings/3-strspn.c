#include <stdio.h>
/**
 * len - calculates string length
 * @str:type string
 *
 * Return: length
 */
int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * _strspn Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 *
 * parameters:
 * @s: A string  pointer to search in  .
 * @accept: A string  pointer fo included charcter.
 *
 * Return: return lenght
 */
unsigned int _strspn(char *s, char *accept)
{
	/*lentghes counters */
	unsigned int lns = len(s), lnc = len(accept), i, i1;
	unsigned int  sInclude  = 0;

	for (i = 0; i < lns; i++)
	{

		for (i1 = 0; i1 < lnc; i1++)
		{
			if (s[i] == accept[i1])
			{
				sInclude  = 1;
				break;
			}

			/*if 's' contain a char that not in 'accept' */
			sInclude  = 0;
		}
		if (sInclude  == 0)
		{
			return (i);
		}
	}
	return (i);
}
