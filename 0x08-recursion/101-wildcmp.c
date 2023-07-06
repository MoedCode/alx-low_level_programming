
/**
 * wildRec -  do the actual worck wildcmp
 * @s1: string to  compare with "the module"
 * @s2: tring to be compared according to module
 * Return: (1) if it match, (0) if doesnt
 */
int wildRec(char *s1, char *s2)
{
	/*if s1 or s2 reaches there rnd  return*/
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	/* if s2 has * ,s2 not reach the end while s1 are return */
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	/* if both has '?' skip by moving pointer to next */
	if (*s1 == *s2)
	{
		return (wildRec(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (wildRec(s1 + 1, s2) || wildRec(s1, s2 + 1))
		{
			return (1);
		}
		return (0);

	}

	return (0);
}
/**
 * wildcmp -  matching two strings,based on wildcard
 * @s1: string to  compare with "the module"
 * @s2: tring to be compared according to module
 * Return: (1) if it match, (0) if doesnt
 */

int wildcmp(char *s1, char *s2)
{
	return (wildRec(s1, s2));
}
