#include "main.h"

/**
 * _puts_recursion - prints a string to stdout
 * @s:pointer to a string
 */
void _puts_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
	{

	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
