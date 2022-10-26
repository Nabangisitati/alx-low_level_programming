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

	while (str[c] != '\0')
	{
		c++;
	}
	h = c / 2;
	if ((c % 2) == 0)
		h += 1;

	while (h < c)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
