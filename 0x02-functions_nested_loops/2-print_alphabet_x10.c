#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase using putchar()10x
 *
 * Return: does not return anything on  succesful calling
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
