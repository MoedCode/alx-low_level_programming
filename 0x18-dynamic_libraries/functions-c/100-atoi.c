#include "main.h"



/**
 * _atoi -  string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value of the string, or 0 if no integer was found
 */
int _atoi(char *s)
{
	int sign = 1, i, ascii, tmp;
	unsigned int accNum = 0;

	for (i = 0; i < _strlen(s); i++)
	{
		ascii = (int)s[i];

		if (ascii == 45)

			sign *= -1;
		else if (ascii == 43)

			sign *= 1;
		if ((accNum > 0 && ascii < 47) || (accNum > 0 && ascii > 58))
			break;
		else if ((ascii < 47) || ascii > 58)
			continue;
		if (ascii > 47 && ascii < 58)
		{
			tmp = ascii - '0';
			accNum *= 10;
			accNum += tmp;
		}
	}
	return (accNum *= sign);
}

