#include "main.h"

/**
 * _strncat - join string2 to 1 upto n characters
 * @dest:string1
 * @src:string2
 * @n: int
 *
 * Return: pointer to a string
 */
char *_strncat(char *dest, char *src, int n)
{
	int j = 0, k = 0;

	/*Find the end of dest*/
	while (*(dest + j) !='\0')
	{
		j++;
	}
	/*add n characters of src to dest*/
	while (k < n)
	{
		*(dest + j) = *(src + k);
		k++;
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
