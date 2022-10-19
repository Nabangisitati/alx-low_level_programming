#include <stdio.h>
/**
 * main - ENTRY
 * Program prints alphabet
 * in both lower and uppercase
 * Return: Returns 0
 */
int main(void)
{
	int i = 97;
	int j = 65;

	/*Beginning of while loop for uppercase*/
	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	/*Beginning of second while loop for uppercase*/
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
