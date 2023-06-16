#include <stdio.h>

/**
* main - Entry point
*
* Descrption: A C Program Printing Data Type sizes Function
*
* Return: Alawys: 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %u  byte(s)\n", sizeof(char));
	printf("Size of a int: %u byts(s)\n ", sizeof(int));
	printf("Size of a long int: %u byts(s)\n ", sizeof(long int));
	printf("Size of a long long int: %u byts(s)\n", sizeof(long long int));
	printf("Size of a float:%u byts(s)6-size.c\n", sizeof(float));
	return (0);
}
