#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: variable to compare ascii values with int
 * Return: 0 if false, and 1 if true
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
