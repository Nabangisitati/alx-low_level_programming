#include <stdio.h>

/**
 * main - Print first 50 fibonacci numbers starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	int counter;
	unsigned long nextnum;
	unsigned long firstnum = 1;
	unsigned long secondnum = 2;

	printf("%lu, %lu, ", firstnum, secondnum);
	for (counter = 3; counter <= 50; counter++)
	{
		nextnum = firstnum + secondnum;
		firstnum = secondnum;
		secondnum = nextnum;
		if (counter < 50)
			printf("%lu, ", nextnum);
		else
			printf("%lu\n", nextnum);
	}
	return (0);
}
