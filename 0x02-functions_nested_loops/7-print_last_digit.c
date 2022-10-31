#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: int number
 * Return: int
 */

int print_last_digit(int c)
{
	int d;

	d = c % 10;
	if (d < 0)
		d = d * -1;
	_putchar(d + '0');
	return (0);
}
