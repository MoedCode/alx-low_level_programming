#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - program entry point
 * program that grnerate key from user name  to crack5 file
 *"For the good of humanity 😂"
 * @argc: integer value of arguments
 * @argv:double array of  arguments passed to main
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	unsigned int i, b;
	size_t len, ASCIISUM;
	char p[7] = "      ",
	*CAHRS = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";


	if (argc != 2)
	{
		printf("Correct usage: ./keygen5 username\n");
		return (1);
	}
	len = strlen(argv[1]);
	p[0] = CAHRS[(len ^ 59) & 63];
	for (i = 0, ASCIISUM = 0; i < len; i++)
		ASCIISUM += argv[1][i];
	p[1] = CAHRS[(ASCIISUM ^ 79) & 63];
	for (i = 0, b = 1; i < len; i++)
		b *= argv[1][i];
	p[2] = CAHRS[(b ^ 85) & 63];
	for (b = argv[1][0], i = 0; i < len; i++)
		if ((char)b <= argv[1][i])
			b = argv[1][i];
	srand(b ^ 14);
	p[3] = CAHRS[rand() & 63];
	for (b = 0, i = 0; i < len; i++)
		b += argv[1][i] * argv[1][i];
	p[4] = CAHRS[(b ^ 239) & 63];
	for (b = 0, i = 0; (char)i < argv[1][0]; i++)
		b = rand();
	p[5] = CAHRS[(b ^ 229) & 63];
	printf("%s\n", p);
	return (0);
}
