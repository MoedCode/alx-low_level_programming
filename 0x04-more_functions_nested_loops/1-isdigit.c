/**
* _isupper - check if the digit in {1..9}
 *
 * @c: from type int
 *
 * Return: (1) if c in {1..9}  (0) else
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}
