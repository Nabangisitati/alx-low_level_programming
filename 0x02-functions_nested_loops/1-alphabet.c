#include "main.h"

void print_alphabet(void)
{
	int i = 97;
	while (i <= 122)
	{
		_putchar(i);
		i++;
	}
}
/**
 * main - checks code
 * program prints alphabet
 * Return: 0 (successful)
 */
int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
