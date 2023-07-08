#include <stdio.h>
#include <stdlib.h>
/**
 * Number -  convert string to int with no return
 *py passing argument n fror int s for string
 * @n: variable passed as ragument to assign int value
 * @s:  string to be convert to number
 * Return: void
 */

void Number(int *n, char *s)
{
	int x = 0, i;

	if (*s == '-')
	{
		*s = '0';
		x = 1;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		*n *= 10;
		/*convert string  to int */
		*n += (((int)s[i]) - 48);
	}

	if (x == 1)
		*n *= -1;
}
/**
 * main - Entry point
 * @argc: nber of command line arguments
 * @argv: An array of command line argument
 * Return:(0) on Success ,(1) on failed
 */
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	Number(&n1, argv[1]);
	Number(&n2, argv[2]);
	result = n1 * n2;

	printf("%d\n", result);
	return (0);

}
