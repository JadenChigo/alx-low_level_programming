#include "main.h"

/**
 *  main - prints alphabets in lowercase, followed by a newline
 *
 *  Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
		_putchar('\n');

	return (0);
}
