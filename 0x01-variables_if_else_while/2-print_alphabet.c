#include <stdio.h>
/**
 * main - Entry point
 * It print alphabets in lower case
 * Return: Always 0
 */
int main(void)
{
	char LowerCase;

	for (LowerCase = 'a'; LowerCase <= 'z'; LowerCase++)
	{
		putchar(LowerCase);
	}
	putchar('\n');
	return (0);
}
