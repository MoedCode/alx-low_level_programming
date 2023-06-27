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
	int i;
	double nn = _strlen(str);
	int  mm = nn % 2;

	if (mm != 0)
		i = nn / 2 + 1;
	else
		i = nn / 2;
	for (; i < nn; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
