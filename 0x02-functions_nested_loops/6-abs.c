#include "main.h"

/**
 *  _abs - prints the absolute value of an integer
 *  @n: the int to be used
 *
 *  Return: an unsigned int
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else
	{
		n *= -1;
		return (n);
	}
}
