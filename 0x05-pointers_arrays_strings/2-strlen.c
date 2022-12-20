#include "main.h"

/**
 * _strlen - it returns the lengrh of a string
 * @s: the string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
