/**
 * _memset -  fills memory with a constant byte
 * @s: char*  to be filled the bytes
 * @b: the char* to  filled with
 * @n: size of s
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
