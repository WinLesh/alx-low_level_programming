#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers.
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 48; digit < 58; digit++)
	{
		putchar(digit);
		if (digit != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
		putchar('\n');
			return (0);
}
