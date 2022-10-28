#include"main.h"
/**
 * cap_string - a function that capitalizes
 * all words of a string
 * @s: pointer to char input array
 * Return: @s
 */
char *cap_string(char *s)
{
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}
