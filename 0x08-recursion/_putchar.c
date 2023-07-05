#include <unistd.h>
/**
 * _putchar - prints char c to stdout
 * @c : the character to print
 *
 * Return: 0 on Sucsess , any integer else for failed
 */

int _putchar(char c)
{
	write(1, &c, sizeof(c));
	return (0);
}
