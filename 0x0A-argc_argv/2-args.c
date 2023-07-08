#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: An array of command line argument
 * Return:(0) on Success ,(1) on failed
 */
int main(int argc, char *argv[])
{
	/*argc counter */
	int argc_ = 0;

	for (argc_ = 0; argc_ < argc; argc_++)
	{
		printf("%s\n", argv[argc_]);
	}

	return (0);
}

