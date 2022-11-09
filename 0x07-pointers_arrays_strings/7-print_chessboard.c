#include"main.h"
/**
 * print_chessboard - Prints a chessboard.
 * @a: The chessboard to be printed.
 * Return : Nothing
 */
void print_chessboard(char (*a)[8])
{
	unsigned int c, b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
			_putchar(a[c][b]);
		_putchar('\n');
	}
}
