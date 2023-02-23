#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int counter, nextnum;
	int firstnum = 1;
	int secondnum = 2;

	printf("%d, %d, ", firstnum, secondnum);
	for (counter = 3; counter <= 50; counter++)
	{
		nextnum = firstnum + secondnum;
		firstnum = secondnum;
		secondnum = nextnum;
		if (counter < 50)
			printf("%d, ", nextnum);
		else
			printf("%d\n", nextnum);
	}
	return (0);
}
