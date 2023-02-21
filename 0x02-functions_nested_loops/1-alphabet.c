#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase using putchar()
 *
 * Return: does not return anything on  succesful calling
 */
void print_alphabet(void)
{
	char i = 'a';

	/*Using ASCII Code to print lowercase alphabet*/
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	 _putchar('\n');
}
