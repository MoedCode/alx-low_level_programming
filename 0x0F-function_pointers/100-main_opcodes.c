#include<stdio.h>
#include<stdlib.h>
/**
 * main - Entry point
 *
 *@argc: argv[] length
 *@argv: char* array of nputs
 *
 * Return: (0) on success
 */
int main(int argc, char *argv[])
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	 n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *fp = (char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%02x", fp[i]);
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}

