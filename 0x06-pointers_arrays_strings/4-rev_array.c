#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: array ot ints
 * @n: an int
 */

void reverse_array(int *a, int n)
{
	int j, i, k;
	int *b;

	/*Reverse original array a and assign into into a  new array b[]*/
	for (j = (n - 1); j >= 0; j--)
	{
		for (i = 0; i < n; i++)
		{
			b[i] = a[j];
		}
	}
	/*Copy contents of b back into original array a*/
	for (k = 0; k < n; k++)
	{
		a[k] = b[k];
	}
}
