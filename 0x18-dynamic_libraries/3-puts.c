#include"main.h"


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
