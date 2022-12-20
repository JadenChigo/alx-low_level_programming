#include "main.h"

/**
 * rev_string - a fxn that reverses a string
 * @s: the string
 * Return: nothing
 */
void rev_string(char *s)
{
	char r = s[0];
	int c = 0;
	int v;

	while (s[c] != '\0')
	{
		c++;
	}
	for (v = 0; v < c; v++)
	{
		c--;
		r = s[v];
		s[v] = s[c];
		s[c] = r;
	}
}
