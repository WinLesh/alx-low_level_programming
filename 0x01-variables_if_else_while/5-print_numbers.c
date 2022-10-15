#include <stdio.h>
/**
 * main -Entry Point
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: Always 0
 */
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
		printf("d%", digit);
	printf("\n");

	return (0);
}
