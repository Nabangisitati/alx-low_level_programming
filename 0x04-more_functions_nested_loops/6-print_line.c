#include "main.h"

/**
 * print_line - prints a line
 * @n:int
 * Return:void
 */

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i < n)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
