#include <stdio.h>
/**
 *main - Entry point
 *Description : prints the lowercase alphabet in reverse,
 *followed by a new line
 *Return: Always 0
 */
int main(void)
{
	char Lc = 'z';

	while (Lc >= 'a')
	{
		putchar(Lc);
		--Lc;
	}
	putchar('\n');

	return (0);
