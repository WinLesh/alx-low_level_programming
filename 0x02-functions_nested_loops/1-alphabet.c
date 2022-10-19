#include "main.h"

/**
 *print_alphabet - utilizes on the _putchar function to print
 *the alphabet a - z
 */

void print_alphabet(void)
{
	char lc;

	for (lc = 'a'; lc <= 'z'; lc++)
	{
		putchar(lc);
	}
	putchar('\n');
