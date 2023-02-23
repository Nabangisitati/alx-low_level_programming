#include <stdio.h>

/**
 * main - program prints fibonacci from 1 to 98th term
 *
 * Return:0
 */
int main(void)
{
	int counter;
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long nextnum;

	printf("%lu, %lu, ", num1, num2);
	for (counter = 3; counter <= 98; counter++)
	{
		nextnum = num1 + num2;
		num1 = num2;
		num2 = nextnum;
		if (counter < 98)
		{
			printf("%lu, ", nextnum);
		}
		else
		{
			printf("%lu\n", nextnum);
		}
	}
	return (0);
}
