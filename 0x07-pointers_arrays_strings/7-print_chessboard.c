#include "main.h"
/**
 * print_chessboard - prints chessboard.
 * @a: inputs pointer
 * Return : nothing
 */

void print_chessboard(char (*a)[8])
{
	unsigned int c, b = 0;

	for (c = 0; c < 64; c++)
	{
		if (c % 8 == 0 && c != 0)
		{
			b = c;
			_putchar('\n');
		}
		_putchar(a[c / 8][c - b]);
	}
	_putchar('\n');
}
