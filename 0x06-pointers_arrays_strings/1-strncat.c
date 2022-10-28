#include "main.h"

/**
 * _strncat - concatenate n bytes of second string to first
 * @dest: Fistr string
 * @src: second string
 * @n: int. no of bytes to be concatenated
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	/*increment counter j to the last position of dest*/
	while (dest[k] != '\0')
	{
		j++;
		k++;
	}
	/*Copy  n elements of src and append it to dest*/
	while (src[i] != '\0' &&  i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	/*Terminating null char for dest*/
	dest[j] = '\0';

	return (dest);

}
