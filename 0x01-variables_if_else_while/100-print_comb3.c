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

	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			if (a != b && a < b)
			{
				putchar(a + 48);
			       	putchar(b + 48);

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
