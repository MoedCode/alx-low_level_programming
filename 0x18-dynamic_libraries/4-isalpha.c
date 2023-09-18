#include"main.h"
/**
 * _isalpha - checks that  input is  char && type is char
 *
 * @c: is a paramter of type char
 *
 * Return: 1 input  char and  lowercase ELSE  reutrn 0
 *
 */
int _isalpha(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		return (1);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
			return (1);
	}
	return (0);
}
