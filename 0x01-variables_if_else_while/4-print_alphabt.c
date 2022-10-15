#include <stdio.h>

/**
 * main-Entry point
 * Description: print alphabets followed by new line except q and e
 * Return: Always 0
 */
int main(void)
{
	char ch a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
	putchar('\n');

	return (0);
}
