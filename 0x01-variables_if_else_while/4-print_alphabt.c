#include <stdio.h>
/**
 * main - starting point
 * Print lowercase aphabet except e and q
 * Return: Return 0
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		if (i == 101 || i == 113)
		{
			i++;
		}
		else
		{
			putchar(i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
