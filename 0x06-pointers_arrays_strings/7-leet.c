#include "main.h"

/**
 * leet - Encodes a string to 1337
 * @a: Pointer to string
 * Return: Char pointer to an encoded string
 */

char *leet(char *a)
{
	char b[] = "aAeEoOtTlL";
	char b1[] = "4433007711";
	int i = 0;
	int j;

	while (a[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (a[i] == b[j])
			{
				a[i] = b1[j];
			}
		}
		i++;
	}
	return (a);
}
