#include <stdio.h>

/**
 * main - Program entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int lcase = 97;
	int upcase = 65;
	/*ASCII CODE for lowercase runs from 97 - 122*/
	while (lcase <= 122)
	{
		putchar(lcase);
		lcase++;
	}
	/*ASCII CODE for uppercase runs from 65 - 90*/
	while (upcase <= 90)
	{
		putchar(upcase);
		upcase++;
	}
	putchar('\n');
	return (0);
}
