#include <stddef.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: a program that prints _putchar, followed by a new line.
 *
 * Return: 0 On  succsess , and any integer  else On Error
 */
int main(void)
{
	char strArr[] = "_putchar";
	int len = sizeof(strArr) - 1;
	int i ;

	for (i = 0; i < len ; i++)
	{
		_putchar(strArr[i]);
	}
	_putchar('\n');
	return (0);
}
