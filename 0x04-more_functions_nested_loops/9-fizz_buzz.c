#include <stdio.h>

/**
 * main - fizzbuzz
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		/*Check for multiples of both 3 and 5*/
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		/*Check for multiples of 5*/
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		/*Check for multiples of 3*/
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			if (i == 100)
			{
				printf("%d", i);
			}
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
