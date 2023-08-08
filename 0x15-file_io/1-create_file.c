#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * create_file -  creates a filewrite given buffer in it
 * @filename: name of the file to red
 * @text_content: Buufer to be wirtten in the file
 * Return: ( 1) on success, (-1) on failure
 */
int create_file(const char *filename, char *text_content)
{
	int des, len, countW;

	if (!filename)
		return (-1);

	for (len = 0; text_content && text_content[len]; len++)
		;
des = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (des == -1)
	{
		return (des);
		close(des);
	}

	countW = write(des, text_content, len);
	if (countW == -1)
		return (countW);

	close(des);

return (1);

}

