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

char* stringRevers(char *x)
{
	int i, i_, ln = len(x)-1;

	
	for (i = 0, i_ = ln; i < ln/2; i++,i_--)
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
	int i1, i2, r_ = 0;
	/*lengthes*/
	int ln1 = len(n1), ln2 = len(n2);
	/*arithmetic variables sones ones sum ctens to carry tens*/
	int sones = 0, ctens = 0;

	/*not Exceed size_r*/
	if (size_r < ln1 || size_r < ln2)
	{
		return (0);
	}
	for (i1 = ln1 - 1, i2 = ln2 - 1; r_ < size_r - 1; i1--, i2--)
	{
		/*add carred tens to sumation of ones*/
		sones = ctens;
		if(i1 >= 0)
		{
			sones += n1[i1] - '0';
		}
		if(i2 >= 0)
		{
		sones += n2[i2] - '0';
		}
		/*if ctens, i1 and i2 ==0 its done*/
		if (i1 < 0 && i2 < 0 && ctens == 0 )
		{
			/* move the break statement inside the loop */
			break;
		}
		/*seprate tens abd ones*/
		/*stringfay sones value and stroe it in r*/
		r[r_] = (sones % 10) + '0';
		ctens = sones / 10;
		/*increminting r dash to add to next index in r */
		r_++;
	}	
	if (i1 >= 0 || i2 >= 0 || ctens != 0)
	{
		return (0);
	}
	/*adding \0 then  off finaly  get r in to corect order */
	r[r_] = '\0';
	stringRevers(r);
	return (r);
}	

