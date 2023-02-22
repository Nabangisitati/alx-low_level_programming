#include "main.h"

/**
 * print_last_digit - prints last digit of a nunber
 * @d: Number to get its last digit
 *
 * Return: last digit of d
 */
int print_last_digit(int d)
{
	int lastd = d % 10;

	_putchar(lastd);
	return (lastd);

}
