#include <stdio.h>
/**
 * main - entry point
 * Print lowercase alphabet in reverse
 * Return: Return 0
 */
int main(void)
{
	int i = 122;

	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
