#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase using putchar()10x
 *
 * Return: does not return anything on  succesful calling
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	int j;

	for (j = 0; j < 10; j++)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	}
	 _putchar('\n');
}
