#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int lcase = 97;
	/*97 - 122 is the ASCII code for lowercase alphabet*/
	while (lcase <= 122)
	{
		putchar(lcase);
		lcase++;
	}
	putchar('\n');
	return (0);
}
