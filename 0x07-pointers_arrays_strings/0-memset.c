#include "main.h"

/**
 * *_memset - fills the memory with constant byte
 * s: memory area
 * n: the size of memory area
 * b: the content of memory area
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = (char)b;
	}
	return(s);
}
