#include "main.h"
/**
 * main - Entry point
 * Program prints _putchar
 * Return: always 0 (success)
 */
int main(void)
{
	char p[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(p[i]);
	}
	_putchar('\n');
	return (0);
}
