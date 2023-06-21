#include"main.h"
/**
 * _islower - function checkthat  input from type char is lower case
 *
 * @c: is a paramter of type char
 *
 * Return: 1 if c is is lowercase else reutrn 0
 *
 */
int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		return (1);
	}
	return (0);
}
