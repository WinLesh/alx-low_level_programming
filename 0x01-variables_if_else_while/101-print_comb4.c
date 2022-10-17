#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible different combinations of three digits
 *
 * Return: Always 0
 */
int main(void)
{
	int j = 0;
	int k;
	int l;

	for (j = 0; j <= 9; j++)
		for (k = j + 1; k <= 9; k++)
			for (l = k + 1; l <= 9; l++)
			{
				if (j != k && j < k && k != l && k < l)
				{
					putchar(j + 48);
					putchar(k + 48);
					putchar(l + 48);

					if  (j + k + l != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
	putchar('\n');

	return (0);
}
