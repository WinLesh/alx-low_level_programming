#include <stdio.h>
/**
 * main - Entry point
 * Description:prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		putchar(digit + '0');
	putchar('\n');

	return (0);
}
