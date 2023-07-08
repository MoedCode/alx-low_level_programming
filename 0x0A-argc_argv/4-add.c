#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: nber of command line arguments
 * @argv: An array of command line argument
 * Return:(0) on Success ,(1) on failed
 */

int main(int argc, char *argv[])
{
	int argc_, argc_1, argc_Total = 0;
	/*start argc_ whihc is argc couter and do nsted loop */
	for (argc_ = 1; argc_ < argc; argc_++)
	{
		for (argc_1 = 0; argv[argc_][argc_1] != '\0'; argc_1++)
		{
			if (!isdigit(argv[argc_][argc_1]))
			{
				printf("Error\n");
				return (1);
			}
		}
		argc_Total += atoi(argv[argc_]);
	}
	printf("%i\n", argc_Total);
	return (0);
}
