#include "main.h"
/**
 * main-Entry point
 * Description- prints _putchar, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char bc[] = "_putchar";
	int a;

	for (a = 0; bc < 8; ++a)

		_putchar(bc[a]);
	_putchar('\n');

	return (0);
}
