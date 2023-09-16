#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program entry point
 * program that grnerate KEY from user name  to crack5 file
 *"For the good of humanity 😂"
 * @argc: integer value of arguments
 * @argv:double array of  arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[]);
int main(int argc, char *argv[])
{
	unsigned int i, temp;
	size_t len, sum;
	char KEY[7] = "      ",
	 *CHARS = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";


	if (argc != 2)
	{
		printf("Correct usage: ./KEYgen5 username\n");
		return (1);
	}

	len = strlen(argv[1]);

	/*
	*The first character of the KEY is determined by
	*the length of the username
	*/
	KEY[0] = CHARS[(len ^ 59) & 63];

	/*
	*The second character of the KEY is determined by the sum of the
	* ASCII valuesof the username CHARS
	*/
	for (i = 0, sum = 0; i < len; i++)
		sum += argv[1][i];
	KEY[1] = CHARS[(sum ^ 79) & 63];

	/*
	*The third character of the KEY is determined by the product of the
	*ASCII values of the username CHARS
	*/
	for (i = 0, temp = 1; i < len; i++)
		temp *= argv[1][i];
	KEY[2] = CHARS[(temp ^ 85) & 63];

	/*
	*The fourth character of the KEY is determined by the maximum
	* ASCII value amongthe username CHARS
	*/
	for (temp = argv[1][0], i = 0; i < len; i++)
		if ((char)temp <= argv[1][i])
			temp = argv[1][i];
	srand(temp ^ 14);
	KEY[3] = CHARS[rand() & 63];

	/*
	*The fifth character of the KEY is determined by the sum
	* of squares of the ASCII values of the username CHARS
	*/
	for (temp = 0, i = 0; i < len; i++)
		temp += argv[1][i] * argv[1][i];
	KEY[4] = CHARS[(temp ^ 239) & 63];

	/*
	*The sixth character of the KEY is determined by a random number generated by
	* the ASCII value of the first character of the username
	*/
	for (temp = 0, i = 0; (char)i < argv[1][0]; i++)
		temp = rand();
	KEY[5] = CHARS[(temp ^ 229) & 63];

	printf("%s\n", KEY);

	return (0);
}
