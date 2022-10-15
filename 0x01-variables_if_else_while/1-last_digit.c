#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main- Entry point
 *
 *Description: print the value of a variable n status:
 *
 * Status is greater than is zero and is not less than 6.
 * Return: Always 0
 */
int main(void)
{
	int n;
	int o; /*o is adigit randomly */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	o = n % 10; /*to get last digit*/

	if (o > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, o);
	}
	else if (o == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, o);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, o);
	}
	return (0);
}
