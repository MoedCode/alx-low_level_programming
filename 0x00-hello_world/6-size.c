#include <stdio.h>

/*
 *main - Entry point
 *
 *Description: A C program a  print siing print the size of data types  function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	printf("Size of a char: %lu byts\n",sizeof(char));
	printf("Size of a int: %lu byts\n ",sizeof(int));
	printf("Size of a long int: %lu byts\n ",sizeof(long int));
	printf("Size of a long long int: %lu byts\n",sizeof(long long int));
	printf("Size of a float:%lu byts\n",sizeof(float));
	return (0);
}
