#include "main.h"
#include <stdio.h>

/**
 * print_array - prints contents of array
 * @a: array
 * @n: int
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
