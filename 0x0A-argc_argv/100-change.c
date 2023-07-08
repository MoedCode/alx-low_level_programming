#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: nber of command line arguments
 * @argv: An array of command line argument
 * Return:(0) on Success ,(1) on failed
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;
/* exit if there ar no argument passed after program name*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
/* convert to number */
	cents = atoi(argv[1]);
/*loop  if just cents have postive int value */
	while (cents > 0)
	{
		coins++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}

	printf("%d\n", coins);

	return (0);
}
