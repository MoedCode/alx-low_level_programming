
#include <stdlib.h>
#include <stdio.h>
/**
 * printRev - revers print string
 * @s: string reverse
 * @l:string length
 * Return: (void)
*/
void printRev(char *s, int l)
{
	int i, j;

	i = j = 0;
	while (i < l)
	{
		if (s[i] != '0')
			j = 1;
		if (j || i == l - 1)
			printf("%c",s[i]);
		i++;
	}
	putchar(10);
	free(s);
}

/**
 * mul -  multiplies two positive mStrbers
 * @n: multiplying
 * @mStr:   multiplying string
 * @NullInd: NULL index of multilying string
 * @Dst: Dstination of mStr
 * @maxInd: maximum addition index to start with
 *
 * Return: pointer to Dst, or NULL on failure
*/
char *mul(char n, char *mStr, int NullInd, char *Dst, int maxInd)
{
	int  add, ADD, mul, MUL, j, k;

	MUL = ADD = 0;
	for (j = NullInd, k = maxInd; j >= 0; j--, k--)
	{
		mul = (n - '0') * (mStr[j] - '0') + MUL;
		MUL = mul / 10;
		add = (Dst[k] - '0') + (mul % 10) + ADD;
		ADD = add / 10;
		Dst[k] = add % 10 + '0';
	}
	for (ADD += MUL; k >= 0 && ADD; k--)
	{
		add = (Dst[k] - '0') + ADD;
		ADD = add / 10;
		Dst[k] = add % 10 + '0';
	}
	if (ADD)
	{
		return (NULL);
	}
	return (Dst);
}
/**
 * isNumber -  chaech  if argument are number
 * @pp: pointer pointer of argf
 *
 * Return: 0 if digits, 1 if not
*/
int isNumber(char **pp)
{
	int i, j;

	for (i = 1; i < 3; i++)
	{
		for (j = 0; pp[i][j]; j++)
		{
			if (pp[i][j] < '0' || pp[i][j] > '9')
				return (1);
		}
	}
	return (0);
}


void isINIT(char *str, int l)
{
	int i;

	for (i = 0; i < l; i++)
		str[i] = '0';
	str[i] = '\0';
}

int main(int argc, char *argv[])
{
	int l1, l2, ln, ti, i;
	char *a;
	char *t;
	char e[] = "Error\n";

	if (argc != 3 || isNumber(argv))
	{
		for (ti = 0; e[ti]; ti++)
			putchar(e[ti]);
		exit(98);
	}
	for (l1 = 0; argv[1][l1]; l1++)
		;
	for (l2 = 0; argv[2][l2]; l2++)
		;
	ln = l1 + l2 + 1;
	a = malloc(ln * sizeof(char));
	if (a == NULL)
	{
		for (ti = 0; e[ti]; ti++)
			putchar(e[ti]);
		exit(98);
	}
	isINIT(a, ln - 1);
	for (ti = l2 - 1, i = 0; ti >= 0; ti--, i++)
	{
		t = mul(argv[2][ti], argv[1], l1 - 1, a, (ln - 2) - i);
		if (t == NULL)
		{
			for (ti = 0; e[ti]; ti++)
				putchar(e[ti]);
			free(a);
			exit(98);
		}
	}
	printRev(a, ln - 1);
	return (0);
}
