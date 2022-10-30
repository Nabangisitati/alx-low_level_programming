#include "main.h"
/**
 * print_alphabet - prints lowercase alphabet
 * Return: void
 */
void print_alphabet(void)
{
	int i = 97;

	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
