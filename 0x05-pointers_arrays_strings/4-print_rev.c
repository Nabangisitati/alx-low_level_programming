#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 */
void print_rev(char *s)
{
	int start = 0, temp, end, i = 0, j;

	/*Find length of string s*/
	while (*(s + i) != '\0')
	{
		i++;
	}
	 end = i - 1;

	while (start < end)
	{
		temp = *(s + start);
		*(s + start) = *(s + end);
		*(s + end) = temp;
		end--;
		start++;
	}
	for (j = 0; j < i; j++)
	{
		_putchar(*(s + j));
	}
	_putchar('\n');

}
