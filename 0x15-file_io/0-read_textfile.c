#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the
 *POSIX standard output.
 *
 * @filename: name of the file to red
 * @letters: maximum number of lettters that will be read
 * Return: (ssize_t)number of lettters that will be read
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
	int des, countR, countW;
	char *readBuff = malloc((letters + 1) * sizeof(char));

	if (!filename || !readBuff)
		return (0);

	des =  open(filename, O_RDONLY);
	if (des == -1)
	{
		free(readBuff);
		close(des);
		return (0);
	}
	countR = read(des, readBuff, letters);
	close(des);

	countW = write(STDOUT_FILENO, readBuff, countR);
	free(readBuff);

	if (countW == -1 || countR == -1)
		return (0);
return (countR);

}

