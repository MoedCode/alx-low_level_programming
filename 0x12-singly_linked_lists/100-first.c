#include <stdio.h>
/**
 * hare - prints a string before exucution of  main function
 */
void hare(void) __attribute__((constructor));

void hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
