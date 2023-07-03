/**
 * _memcpy - coppy a destnation string to source
 * @dest: destination string
 * @src: source string
 * @n: the length of copied string
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
