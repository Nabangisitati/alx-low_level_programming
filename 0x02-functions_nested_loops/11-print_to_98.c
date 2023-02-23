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
	/*check if n is less than or greater than 98*/
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			if (n > 98)
				printf("%d, ", i);
			else
				printf("%d", i);
			n--;
		}
	}
	printf("\n");
}
