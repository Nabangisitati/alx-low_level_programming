#include "main.h"

/**
 * puts_half - prints second half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int c = 0;
	int h;

	while (str[c])
	{
		c++;
	}
	h = (c / 2) - 1;

	while (h < c)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
