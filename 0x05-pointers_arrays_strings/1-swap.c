#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: the first int
 * @b:the second int
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c = *b;
	*a = *b;
	*b = c;
}
