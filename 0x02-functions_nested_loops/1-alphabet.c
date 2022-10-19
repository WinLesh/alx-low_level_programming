include "main.h"
/**
 *print_alphabet - utilizes on the _putchar function to print
 *the alphabet a - z
 */
void print_alphabet(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
