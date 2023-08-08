#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *strAlloc(char *file);
void clodeF(int desc);

/**
 * strAlloc - creat allocate block for  string .
 * @file: The name of the file str is storing chars for.
 *
 * Return: A pointer to the newly-allocated str.
 */
char *strAlloc(char *file)
{
	char *str;

	str = malloc(sizeof(char) * 1024);

	if (str == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);

		exit(99);
	}

	return (str);
}

/**
 * clodeF - Closes file.
 * @desc:file descriptor
 */
void clodeF(int desc)
{
	int status;

	status = close(desc);

	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close desc %d\n", desc);
		exit(100);
	}
}

/**
 * main - program Entry point, copy file tio another
 * @argv:array of argument passed to porogram.
 * @argc: argv length.
 *
 * Return: (0) on success.

 */
int main(int argc, char *argv[])
{
	int SourseS, destSt, readSt, writeSt;
	char *str;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	str = strAlloc(argv[2]);
	SourseS = open(argv[1], O_RDONLY);
	readSt = read(SourseS, str, 1024);
	destSt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (SourseS == -1 || readSt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(str);
			exit(98);
		}

		writeSt = write(destSt, str, readSt);
		if (destSt == -1 || writeSt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(str);
			exit(99);
		}

		readSt = read(SourseS, str, 1024);
		destSt = open(argv[2], O_WRONLY | O_APPEND);

	} while (readSt > 0);

	free(str);
	clodeF(SourseS);
	clodeF(destSt);


	return (0);
}
