#include <stdio.h>

/**
 * main - program that  computes and prints the sum of all
 * multiples of 3 or 5 below 1024
 * Return:returns 0
 */

int main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1024)
	{
		if (i % 5 == 0)
		{
			sum += i;
		}
		i++;
	}
	printf("sum of multiples of 5  below 1024 is %d", sum);
	return (0);
}
