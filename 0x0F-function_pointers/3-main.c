#include"calc.h"
/**
 * main - my amazing App Entry point the greatest C calculator ever
 *
 * @argc:lenght of argv
 * @argv: array of char* inputs whic eill main recive
 * Rreturn: (int)
 */
int main(int argc, char *argv[])
{
	int input1, input2, RESULT = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

input1 = atoi(argv[1]);
input2 = atoi(argv[3]);



	if (
		strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
		strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0 &&
		strcmp(argv[2], "%") != 0
		)
	{
		printf("Error\n");
		exit(98);
	}

	RESULT = get_op_func(argv[2])(input1, input2);
	printf("%i\n", RESULT);

	return (0);
}
