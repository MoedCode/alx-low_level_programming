#include"main.h"
/**
 * print_chessboard - prints chessboard by nested loop
 *
 * @a: array of ints all has a length 8 as an input
 *
 * Return: void
 */
#include"main.h"

void print_chessboard(char (*board)[8])
{
	int row, column;

	for (row = 0; row < 8; row++)
	{
		for (column = 0; column < 8; column++)
		{
			_putchar(board[row][column]);
		}
		_putchar('\n');
	}
}


