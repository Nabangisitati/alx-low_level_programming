#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers from n to 98
 * @n: int
 * Return: void
 */

void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (n == 98)
				printf("%d", i);
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (n == 98)
				printf("%d", i);
			printf("%d, ", i);
		}
	}
}
