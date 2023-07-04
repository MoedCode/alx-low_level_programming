#include"main.h"
/**
 * print_chessboard - prints chessboard by nested loop
 *
 * @a: array of ints all has a length 8 as an input
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{

	int I, i;

	for (I = 0; I < 8; I++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[I][i]);
		}
		_putchar('\n');
	}
			_putchar('\n');
}
