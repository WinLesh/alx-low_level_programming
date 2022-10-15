#include <stdio.h>
/**
 * main - Entry point
 * Description : prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int a;
	int b = 0;

	while (b <= 9)
	{
		a = 0;
		while (a <= 9)
		{
			if (b != a && b < a)
			{
				putchar(a + '0');
			       	putchar(b + '0');

				if (a + b != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			a++;
		}
		b++;
	}
putchar('\n');

return (0);
}
