#include"main.h"
/**
 *print_line - draws a straight line in the terminal
 *@n: is the number of times the _ character
 *should be printed
 *Return: void
 */
void print_line(int n)
{
	int ln;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (ln = 0; ln < n; ln++)
			putchar('_');
		putchar('\n');
	}
}
