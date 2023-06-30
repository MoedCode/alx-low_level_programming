#include "main.h"
#include <stdio.h>

/**
 * infinite_add - adds two numbers
 * @n1: number one.
 * @n2: number two.
 * @r: buffer that the function will use to store the result.
 * @size_r: buffer size:
 * Return: the pointer to dest.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, ij, ik, il, im, in;

	for (i = 0; n1[i]; i++)
		;
	for (ij = 0; n2[ij]; ij++)
		;
	if (i > size_r || ij > size_r)
		return (0);
	im = 0;
	for (i -= 1, ij -= 1, ik = 0; ik < size_r - 1; i--, ij--, ik++)
	{
		in = im;
		if (i >= 0)
			in += n1[i] - '0';
		if (ij >= 0)
			in += n2[j] - '0';
		if (i < 0 && j < 0 && in == 0)
		{
			break;
		}
		m = in / 10;
		r[ik] = in % 10 + '0';
	}
	r[ik] = '\0';
	if (i >= 0 || ij >= 0 || im)
		return (0);
	for (ik -= 1, il = 0; l < ik; ik--, il++)
	{
		im = r[ik];
		r[ik] = r[l];
		r[l] = im;
	}
	return (r);

}
