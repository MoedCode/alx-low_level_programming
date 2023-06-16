#include <stdio.h>

/**
* main - Entry point
*
* Descrption: A C Program for Printing  sizes of Types using printf Function
*
* Return: Alawys: 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of an int: %u byts(s)\n", sizeof(int));
	printf("Size of a long int: %u byts(s)\n", sizeof(long int));
	printf("Size of a long long int: %u byts(s)\n", sizeof(long long int));
	printf("Size of a float: %u byts(s)\n", sizeof(float));
	return (0);
}
