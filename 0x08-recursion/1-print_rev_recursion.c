#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s:pointer to a string
 */
void _print_rev_recursion(char *s)
{
	/*base case*/
	if (*s == '\0')
	{

	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	_putchar('\n');
}
