#include "main.h"

/**
 * more_numbers - prints 10 times the numbers (1 to 14)
 * Return: Always 0
 */
void more_numbers(void)
{
	int m, n;

	for (m = 0; m < 10; m++)
	{
		for (n = 0; n < 15; n++)
		{
			if (m >= 10)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
