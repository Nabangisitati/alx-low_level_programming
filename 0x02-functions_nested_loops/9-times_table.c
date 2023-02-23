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
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			 _putchar(' ');
			p = j * i;
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
