#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: An array of command line argument
 * Return:(0) on Success ,(1) on failed
 */
int main(int argc, char *argv[])
{
	/*if there ar no ragument passed*/
	if (argc < 0)
	{
		return (0);
	}
	/*while still there are argument print it*/
	while (*argv[0])
	{
		_putchar(*argv[0]);
		argv[0]++;
	}
	_putchar('\n');

	return (0);
}

