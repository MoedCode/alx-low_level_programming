#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * append_text_to_file - append a string a file
 * @filename: pointer to string wich is file nmae
 * @text_content: pointer to string which is file to append
 * Return: ( 1) on success , (-1) on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int des, countW, len;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		if (access(filename, F_OK | W_OK) == -1)
			return (-1);

		return (1);
	}
	for (len = 0; text_content && text_content[len]; len++)
		;

	des = open(filename, O_WRONLY | O_APPEND);
	if (des == -1)
		return (des);

	countW = write(des, text_content, len);

	if (countW == -1)
		return (countW);

	close(des);
	return (1);

}

