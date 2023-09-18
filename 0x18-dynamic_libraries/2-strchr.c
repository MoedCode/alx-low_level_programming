#include <stddef.h>

/**
 * _strchr - Returns a pointer to character  in the string s, or NULL
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

	/*s will point '\0' if c = '\0' */
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
