#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9,
 * followed by newline
 * Return: void
 */

void print_most_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
		_putchar('\n');
}
