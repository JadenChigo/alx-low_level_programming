#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: the string
 */
void print_rev(char *s)
{
	int b = 0;

	while (s[b] != '\0')
	{
		b++;
	}
	for (b -= 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
		_putchar('\n');
}
