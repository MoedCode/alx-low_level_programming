#include <unistd.h>

/**
 * main - Entry Point
 *
 * Descrption: writing a qouat message  useing write from  nuistd.h
 *
 * write function parameters 1-buffer start point 2-name of buffer 3- bufSize
 *
 * return: 1 (not success)
*/

int main(void)
{
	char Chr[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, Chr, 59);
	return (1);
}
