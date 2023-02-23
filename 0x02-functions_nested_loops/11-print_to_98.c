#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: starting point i. e first number
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	for (i = n; i <= 98; i++)
	{
		if (i < 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	printf("\n");
}
