#include "main.h"

/**
 *  print_alphabet_x10 - prints 10 times the alphabet, folloed by a newline
 *
 *  Return: Always 0(Success)
 */

void print_alphabet_x10(void)
{
	char a;
	char b;

	for (b = 0; b <= 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');	
	}
}
