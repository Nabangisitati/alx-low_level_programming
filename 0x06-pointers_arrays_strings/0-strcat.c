#include "main.h"

/**
 * _strcat - concatenate one string to another
 * @dest: pointer to string
 * @src: pointer to the second string
 * Return: pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, k;
	int counter = 0;

	k = 0;

	/*increase counter to last element of dest*/
	for (i = 0; dest[i] != '\0'; ++i)
	{
		counter++;
	}
	/*append elements of src to dest from its last element*/
	while (src[k] != '\0')
	{
		dest[counter] = src[k];
		k++;
		counter++;
	}
	/*Terminating null*/
	dest[counter] = '\0';

	return (dest);
}
