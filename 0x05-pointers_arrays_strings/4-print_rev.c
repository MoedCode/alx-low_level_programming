#include"main.h"
/**
 * _strlen -   returns the length of a string.
 *
 * @s: type char*
 *
 * Return: String length
 */
int _strlen(char *s)
{
	int ln = 0;

	while (s[ln] != '\0')
		ln++;
	return (ln);
}

/**
 * print_rev -  prints a string, in reverse, new line
 *
 * @s: type char
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
	int a;

	for (a = _strlen(s) - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
