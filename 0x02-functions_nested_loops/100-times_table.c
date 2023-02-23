#include "main.h"

/**
 * print_times_table - prints an n times table
 * @n: n-times table
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	if ((n > 15) || (n < 0))
	{

	}
	else
	{
		int j, k, p;

		for (j = 0; j <= n; j++)
		{
			_putchar('0');
			for (k = 1; k <= n; k++)
			{
				_putchar(',');
				_putchar(' ');
				p = j * k;
				if (p <= 9)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((p / 10) + '0');
				}
				_putchar((p % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
