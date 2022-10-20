#include "main.h"

/**
 * main - Entry point
 *
 * @i: argument representing value
 *
 * positive_or_negative: checks for any positive of negative number
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	/* my if statement */
	if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
