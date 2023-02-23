#include <stdio.h>

/**
 * main - program prints sum of 3 or 5 multiples below 1024
 *
 * Return: 0 on successful execution
 */
int main(void)
{
	int sum = 0;
	int n = 0;

	while (n < 1024)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			sum = sum + n;
		}
		n++;
	}
	printf("%d\n", sum);
	return (0);
}
