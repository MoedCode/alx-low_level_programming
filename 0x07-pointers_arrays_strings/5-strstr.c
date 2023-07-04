#include <stddef.h>

/**
 * _strstr - function that search for a string in another string
 *
 * parameters:
 * @haystack: A string pointer to search in .
 * @needle: A string pointer fond charcer.
 * Return: A needle pointer or  null
 */
char *_strstr(char *string_to_search, char *substring_to_find)
{
	if (*substring_to_find == '\0')
		return ((char *)string_to_search);
	while (*string_to_search != '\0')
	{
		char *current_string = string_to_search;
		char *current_substring = substring_to_find;

		while (*current_substring != '\0' && *current_string == *current_substring)
		{
			current_string++;
			current_substring++;
		}
		if (*current_substring == '\0')
			return ((char *)string_to_search);
		string_to_search++;
	}
	return (NULL);
}


