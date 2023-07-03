/**
 * _strchr - Returns a pointer to character c in the string s, or NULL
 * @s: string to search in
 * @c: char to lock for
 * Return: pointer s if s==c  or cis empty else null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	return (NULL);
}
