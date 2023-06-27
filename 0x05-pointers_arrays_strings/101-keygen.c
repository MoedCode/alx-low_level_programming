#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
/**
 * main - Enry Point generate random password
 *
 * Return: (0) On   Success any integer  else for  failer
 */

int main(void)
{
int i = 0, randN = 0, sumT = 0;
char password[100],
p[63] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	srand(time(NULL));
	while (sumT < (2650))/*2772 -122*/
	{
		randN = rand() % 62;
		password[i] = p[randN];
		sumT += p[randN];
		i++;
	}
	randN  = 2772 - sumT;
	password[i] = randN;
	password[++i] = '\0';
	printf("%s\n", password);
	return (0);
}
