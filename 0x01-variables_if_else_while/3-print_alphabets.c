#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lowercase then in uppercase
 * Return: Always 0
 *
 */
int main(void)
{
	char LowerCase = 'a';
	char UPPERCASE = 'A';

	/* this print a-z in lower case*/
	for (LowerCase = 'a'; LowerCase <= 'z'; LowerCase++)
		putchar(LowerCase);
	/*this prints A-Z in upper case*/
	for (UPPERCASE = 'A'; UPPERCASE <= 'Z'; UPPERCASE++)
		putchar(UPPERCASE);
	putchar('\n');

	return (0);
}
