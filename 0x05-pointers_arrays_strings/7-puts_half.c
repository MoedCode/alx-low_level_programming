#include"main.h"
/**
 * _strlen -  returns the length of a string.
 *
 * @s: type CHAR*
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
		ln++;
	return (ln);
}
/**
 * puts_half -  print half str
 * @str: char*
 *
 * return: Nothin baby
 *
 */

void puts_half(char *str)
{
	int i, ln = _strlen(str);

	if (ln % 2 != 0)
	{
		i = ln / 2 + 1;
	}
	else
	{
		i = ln / 2;
	}

	for (; i < ln; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
