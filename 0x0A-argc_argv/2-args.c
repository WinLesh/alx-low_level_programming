#include <stdio.h>
/**
 *main - Prints all arguments it receives.
 *@argc: The number of arguments supplied to the program.
 *@argv: An array of pointers to the arguments.
 *Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int numarg;

	for (numarg = 0; numarg < argc; numarg++)
		printf("%s\n", argv[numarg]);
	return (0);
}
