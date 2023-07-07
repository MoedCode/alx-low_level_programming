#include <stddef.h>
/**
 * _strstr - looks for a string parmeter in another
 * @string_to_search: string to searched in "haystack"
 * @substring_to_find: string to look for "needle"
 * Return: A substring_to_find "needle" pointer or return null
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

