#include "main.h"

/**
 *print_alphabet -prints the alphabet, in lowercase.
 *the alphabet a - z followed by newline
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
