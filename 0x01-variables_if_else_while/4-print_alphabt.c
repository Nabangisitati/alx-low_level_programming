#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0 On success
 */
int main(void)
{
	int lcase = 97;

	while (lcase <= 122)
	{
		if (lcase == 101)
		{}
		else if (lcase == 113)
		{}
		else
		{
			putchar(lcase);
		}
		lcase++;
	}
	putchar('\n');
	return (0);
}
