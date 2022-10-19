#include <stdio.h>
/**
 * main - program entry point
 * Prints alphabet in lowercase using ASCII
 *Return: Returns 0 on success
 */
int main(void)
{
	int i = 97;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
