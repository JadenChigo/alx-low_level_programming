#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int and updates it to 98
 * @*n: the pointer fot the n
 * Return: the value of *n
 */

void reset_to_98(int *n)
{
	int a;

	*n = &a;

	*n = 98;
}
