#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: An array of command line argument
 * Return:(0) on Success ,(1) on failed
 */
int main(int argc, char *argv[])
{
	//indecate falier 
		if (argv[0] == 0)
					return (1);
//+48 cinvert to numrical for number as string
			_putchar((argc - 1) + 48);
				_putchar('\n');
					return (0);
}

