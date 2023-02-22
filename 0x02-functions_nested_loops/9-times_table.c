#include "main.h"

/**
 * times_table - prints multiplication table from 0 to 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 0; j <= 9; j++)
		{
			p = j * i;
			_putchar((p % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
