#include"main.h"
/**
 *print_numbers - print 0 - 9
 *only using _putchar twice
 *Return: Always 0
 *
 */
void print_numbers(void)
{
	int num = 0;
	
	for (num = 0; num < 10; num++)
	{
		_putchar(num + '0');
	}
	
	_putchar('\n');
}
