#include <stdio.h>

/**
 * main - prints sum of fibonacci below 4000000
 *
 * Return:0
 */
int main(void)
{
	int c;
	unsigned long num1 = 1;
	unsigned long num2 = 2;
	unsigned long num3;
	unsigned long sum = 2;

	for (c = 3; c <= 32; c++)
	{
		num3 = num1 + num2;
		if (num3 % 2 == 0)
		{
			sum = sum + num3;
		}
		else
		{

		}
		num1 = num2;
		num2 = num3;
	}
	printf("%lu\n", sum);
	return (0);
}
