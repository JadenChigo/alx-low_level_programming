#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: numbeer of arguments passed
 * @argv: strings passed
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
