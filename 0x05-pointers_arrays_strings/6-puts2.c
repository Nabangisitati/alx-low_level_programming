#include "main.h"
/**
 * puts2 - print every other char of a string
 * @str: string
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i = i + 2;
		_putchar(str[i]);
	}
	 _putchar('\n');

}
