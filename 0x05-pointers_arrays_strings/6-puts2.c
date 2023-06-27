#include"main.h"
/**
 * _strlen -  Returns a length of a string.
 *
 * @s: type char*
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
 * puts2 - prints every other character of a string,
 * starting with the first character
 *
 * @str: type string
 *
 *
 * return: void
 */

void puts2(char *str)
{
	int mode = 1, i;

	for (i = 0; i < _strlen(str); i++)
	{
		if (mode == 1)
		{
		_putchar(str[i]);
		mode = 0;
		}

		else
			mode = 1;
	}
	_putchar('\n');
}
