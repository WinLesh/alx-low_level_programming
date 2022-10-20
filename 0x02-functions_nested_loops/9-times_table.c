#include"main.h"
/**
 *times_table -prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int n;
	int o;
	int p;

	for (n = 0; n <= 9; ++n)
	{
		_putchar('0');

		for (o = 1; o <= 9; o++)
		{
			_putchar(',');
			_putchar(' ');

			p = n * o;

			/**
			 *put space if product is a single number
			 * place the first digit if its two numbers
			 */

			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0'); /*get the first digit*/
			_putchar((p % 10) + '0'); /*get the second digit*/
		}
		_putchar('\n');
	}
}
