#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strlen -   returns the length of a string.
 * @s: char* string to calculate its length
 * Return: string length
 */
int  _strlen(char *s )
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 *lmitlessMul -  multiplies two positive numbers passed ass a char*
 *
 * @buff0: type numer passed as string
 * @buff1: type numer passed as string
 *
 *Return: (char* buff) reslt of multiplication ,(NULL) if falid to allocate
 */
char* lmitlessMul(char* buff0, char* buff1)
{
	int i0, i1, ln0, ln1, ln2, carry = 0, ones;
	char* buff;

	ln0 = _strlen(buff0);
	ln1 = _strlen(buff1);
	ln2 = ln0 + ln1 + 1;
	buff = (char*) calloc(ln2, sizeof(char));
	if (buff == NULL)
		return buff;
	for (i0 = 0; i0 < ln2; i0++)
		buff[i0] = '0';
	for (i0 = ln0 - 1; i0 >= 0; i0--) {
		int num1 = 0;

		num1 = buff0[i0] - '0';
		carry = 0;

		for (i1 = ln1 - 1; i1 >= 0; i1--) {
			int num2;

			num2 = buff1[i1] - '0';
			 ones = 0;
			ones =  num1 * num2 + (buff[i0 + i1 + 1] - '0') + carry;
			buff[i0 + i1 + 1] = (ones % 10) + '0';
			carry = ones / 10;
		}
		buff[i0 + i1 + 1] = carry + '0';
	}

	buff[ln2 - 1] = '\0';

	if (*buff == '0') {
		return buff + 1;
	}
	else {
		return (buff);
	}
}
/**
 * main - Entry point
 * @argc: int index of argv[]
 * @argv: array of char*  arguments
 * Return: 0 on succses
 */
int main(int argc, char *argv[])
{
	char *buff0, *buff1, *result;
		if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	buff0 = argv[1];
	buff1 = argv[2];



	result =lmitlessMul(buff0, buff1);
	printf("%s",result);
	free(result);
	return (0);

}

