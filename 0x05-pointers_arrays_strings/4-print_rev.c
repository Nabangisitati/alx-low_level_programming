#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: String
 * Return: void
 */

void print_rev(char *s)
{
	int  r = 0;

	while (s[r] != '\0')
	{
		r++;
	}
	for  (r = r - 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
