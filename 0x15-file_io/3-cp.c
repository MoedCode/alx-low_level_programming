#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>



/**
 * openF - check statuse given files.
 * @argv: pointer to main argv "main argument array".
 * @argc: arg v lengtht.
 * @file_from: pointer to the source file.
 * @file_to: A pointer to   descriptor file.
 * Return: (void).
 */
void openF(int argc, char **argv, int *file_from, int *file_to)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	*file_from = open(argv[1], O_RDONLY, 0);

	if (*file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	*file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (*file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(*file_from);
		exit(99);
	}
}

/**
 * copyF - copy files main work done here
 *
 * @file_from: pointer to source file.
 * @file_to: pointer to destnation file.
 * @argv: The argument vector.
 *
 * Return: (void).
 */
void copyF(int file_from, int file_to, char **argv)
{
	int readS, writeS;
	char buff[1024];

	while ((readS = read(file_from, buff, 1024)) > 0)
	{
		writeS = write(file_to, buff, readS);

		if (writeS != readS)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_from);
			close(file_to);
			exit(99);
		}
	}
	if (readS == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from);
		if (file_to != -1)
			close(file_to);
		exit(98);
	}

	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
}

/**
 * main -  program Entry point.
 * @argv:  to main argv "main argument array".
 * @argc: arg v lengtht.
 * Return: 0 on success,
 * other values on error (from openF or copyF).
 */
int main(int argc, char **argv)
{
	int file_to, file_from;

	openF(argc, argv, &file_from, &file_to);
	copyF(file_from, file_to, argv);

	return (0);
}
