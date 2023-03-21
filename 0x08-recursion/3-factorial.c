#include "main.h"

/**
 * factorial - finds the factorial of a given number
 * @n:integer
 *
 * Return: an int
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	/*base cases*/
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
