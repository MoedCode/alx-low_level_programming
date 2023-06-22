/**
* _isupper - check if the digit in {1..9}
 *
 * @c: from type int
 *
 * Return: (1) if c in {1..9}  (0) else
 */
int _isdigit(int c)
{
	int i = 0;

	while (i <= 9)
	{
		if (c == i)
		{
			return (1);
		}
		i++;
	}
	return (0);
}
