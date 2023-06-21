#include<stdio.h>
/**
 * main - Entry point
 *
 * Description: computes  the sum ofe  multiples of 3 or 5
 *below 1024 then print result
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0;
	int i = 0;

	for (; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
