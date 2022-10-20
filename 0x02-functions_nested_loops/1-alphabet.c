#include "main.h"
/**
 * main - checks code
 * program prints alphabet
 * Return: 0 (successful)
 */
int main(void)
{
	int i;

	void print_alphabet(void)
	{
		i = 97;

		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
	return (0);
}
