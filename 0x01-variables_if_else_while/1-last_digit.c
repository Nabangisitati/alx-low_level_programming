#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Finfd the last digit of a number n */
	lastdigit = n % 10;
	if (lastdigit > 5)
	{
		printf("The last digit of ");
		printf("%d is %d and is greater than 5\n", n, lastdigit);
	}
	else if (lastdigit < 6)
	{
		printf("The last digit of ");
		printf("%d is %d and is less than 6 and not 0\n", n, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("The last digit of %d is %d and is 0\n", n, lastdigit);
	}
	return (0);
}
