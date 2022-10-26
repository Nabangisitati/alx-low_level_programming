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
	if ((i % 2) == 0)
		h = (c / 2) + 1;
	else
		h = (c - 1) / 2;

	while (h < i)
	{
		_putchar(str[h]);
		h++;
	}
	_putchar('\n');
}
