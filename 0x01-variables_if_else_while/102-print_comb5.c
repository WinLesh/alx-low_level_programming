#include <stdio.h>
/**
 * main - Entry point
 * prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0
 */
int main(void)
{
	int p;
	int q;

	for (p = 0; p <= 99; p++)
	{
		for (q = 0; q <= 99; q++)
		{
			if (p < q)
			{
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				putchar(' ');
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);

				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
