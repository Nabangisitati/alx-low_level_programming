#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase using putchar()10x
 *
 * Return: does not return anything on  succesful calling
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int j = 1;

	while (j++ <= 10)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	}
	 _putchar('\n');
}
