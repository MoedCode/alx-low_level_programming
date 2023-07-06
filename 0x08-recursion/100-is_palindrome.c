/**
 * lenRec- return the length of a string
 * @s: string to which its length calculated
 * Return: length of a string
 */
int lenRec(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		i += lenRec(s + 1);
	}
	return (i);
}
/**
 * strComp - determine  the string is a palindrome or not
 * @A: int index to start from
 * @Z: int index to end with
 * @str: the string that we want to know if its palindrome  or not
 *
 * Return: 1 if palindrome otherwise 0
 */

int strComp(int A, int Z, char *str)
{
	if (str[A] == str[Z] && str[A] != '\0' && str[Z] != '0')
	{
		return (strComp(A + 1, Z - 1, str));
	}
	else if (str[A] != str[Z])
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string to know if its palindrome
 * Return: (1) if palindrome otherwise (0)
 */

int is_palindrome(char *s)
{
	int Z = lenRec(s) - 1;

	int A = 0;

	return (strComp(A, Z, s));
}

