#include "main.h"

/**
 * print_most_numbers - prints numbers 1 to 9 except 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if ((i == 2) || (i == 4))
		{

		}
		else
		{
			_putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
