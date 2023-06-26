#include"main.h"
/**
 * _strlen -  returns the length of a string.
 *
 * @s: type char*
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
 * _puts -   print the string
 *
 * @str: input of type char*
 *
 * Return: void
 *
 */
void _puts(char *str)
{
	int count;

	for (count = 0; count < _strlen(str); count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
}
