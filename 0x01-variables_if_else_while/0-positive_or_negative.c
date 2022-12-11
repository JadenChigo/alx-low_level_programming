#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes here */

/* betty style doc for function main goes here */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf(n, "%i is positive\n");
	}
	else if (n == 0)
	{
		printf(n, "%i is zero\n");
	}
	else
	{
		printf(n, "%i is negative\n");
	}
	return (0);
}
