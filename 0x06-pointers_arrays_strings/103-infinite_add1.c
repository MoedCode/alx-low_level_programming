/**
 * len - calculates string length
 * @str:type string
 *
 * Return: length
 */
int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
/**
 * stringRevers - reverse a string by  replacing indexs values
 * @x: - type char* to rverce
 * @len: - char* length
 * Return: reversed char*
 */

char *stringRevers(char *x)
{
	int i, i_, ln = len(x) - 1;

	for (i = 0, i_ = ln; i < ln / 2; i++, i_--)
	{
		int tmp = x[i];

		x[i] = x[i_];
		x[i_] = tmp;
	}
	return (x);
}
/**
 * infinite_add - adds two strings of numbers return
 * convert them partially to number then sring
 * @n1: type char* str to add
 * @n2: type char* str to add
 * @r:  type cgar* str to add to
 * @size_r: maximum buffer size
 * Return: sum of umbers as char* r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	/* countera variables */
	int i1, i2, r_;
	/*lengthes*/
	int ln1 = len(n1) - 1, ln2 = len(n2) - 1;
	/*arithmetic variables sones ones sum ctens to carry tens*/
	int sones = 0, ctens = 0;
	/*add carred tens to sumation of ones*/
	sones = ctens;
	/*not Exceed size_r*/
	if (size_r < ln1 || size_r < ln2)
	{
		return (0);
	}
	for (i1 = ln1, i2 = ln2 ; r_ < size_r - 1; i1--, i2--)
	{
		if (i1 >= 0)
		{
			sones += n1[i1] - '0';
		}
		if (i2 >= 0)
		{
			sones += n2[i2] - '0';
		}
		if (i1 < 0 && i2 < 0 && ctens == 0)
		{
			break;
		}
		r[r_] = (sones % 10) + '0';
		ctens = sones / 10;
		r_++;
	}
	if (i1 >= 0 || i2 >= 0 || ctens != 0)
	{
		return (0);
	}
	r[r_] = '\0';
	stringRevers(r);
	return (r);
}

