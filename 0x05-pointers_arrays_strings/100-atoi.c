#include "main.h"
#include"main.h"
/**
 * _strlen - returns the length of a string.
 *
 * @s: char*
 *
 * Return: string length
 */
int _strlen(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
		ln++;
	return (ln);
}

/**
 * _atoi -  string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value of the string, or 0 if no integer was found
 */
int _atoi(char *s)
{
	int sign = 1, i, toAscii, tmp, ln = _strlen(s);
	unsigned int accNum;

	for (i = 0; i < ln; i++)
	{
		toAscii = (int)s[i];
		if ((isN > 0 && toAscii < 47) || (isN > 0 && toAscii > 58))
		{
			break;
		}
		else if ((toAscii < 47) || toAscii > 58)
		{
			continue;
		}
		if (toAscii == 45)
		{
			sign *= -1;
		}
		if (toAscii > 47 && toAscii < 58)
		{
			tmp = toAscii - '0';
			accNum *= 10;
			accNum += tmp;
		}
	}
	return (accNum *= sign);
}
