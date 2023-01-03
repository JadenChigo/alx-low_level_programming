#include "main.h"

/**
 * more_numbers - prints 10 times the numbers (1 to 14)
 * Return: Always 0
 */
void more_numbers(void)
{
	int m;
	int n = 0;

	for (m = 0; m < 10; m++)
	{
		while (n < 15)
		{
			n++;
			if(n >= 10)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else
			{
				_putchar(n + '0' && '\n');
			}
		}	
	}
}	
