#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int j;
	int k;
	int l;

	for (j = 0; j <= 7; j++)
		for (k = j + 1; k <= 8; k++)
			for (l = k + 1; l <= 9; l++)
			{
				putchar(j);
				putchar(k);
				putchar(l);
				if (j == 7 && k == 8 && l == 9)
				{
				}
				else
				{
					putchar(",");
					putchar(" ");
				}
			}
	putchar("\n");

	return (0);
}
