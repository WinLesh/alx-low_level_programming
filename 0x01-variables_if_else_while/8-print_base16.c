#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all the numbers of base 16 in lowercase
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	int Number;
	char Lowerc;

	for (Number = 0; Number < 10; Number++) /*come back to describe you :(*/
		putchar((Number % 10) + '0');

	for (Lowerc = 'a'; Lowerc <= 'f'; Lowerc++) /*f; decimal rep of f*/
	putchar(Lowerc);

	putchar('\n');

	return (0);
}
