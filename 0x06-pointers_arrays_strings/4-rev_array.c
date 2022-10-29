#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: array ot ints
 * @n: an int
 */

void reverse_array(int *a, int n)
{
	int j;

	/*Reverse original array a and assign into into a  new array b[]*/
	for (j = 0; j < n; j++)
	{
		int t = 0;

		n--;
		t = a[j];
		a[j] = a[n];
		a[n] = t;
	}

}
