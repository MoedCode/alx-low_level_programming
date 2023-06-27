#include "main.h"

/**
 * _atoi -  string to an integer
 * @s: pointer to the string to convert
 *
 * Return: the integer value of the string, or 0 if no integer was found
 */
int _atoi(char *s)
{
	int sgn,  num = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-')
	{
        	sgn = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		 if (num > INT_MAX / 10 || (num == INT_MAX / 10 && (*s - '0') > INT_MAX % 10))
		{
			return sign == -1 ? INT_MIN : INT_MAX;
		}
		num = num * 10 + (*s - '0');
		s++;
	}
    return sign * num;
}
