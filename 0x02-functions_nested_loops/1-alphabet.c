#include "main.h"

/**
 *print_alphabet - Entry point
 *Description: print lowercase alphabets and new line
 *
 */
void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
