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
	char *concatenated;
	/*Copy contents of dest into concatenated*/
	for (i = 0; dest[i] != '\0'; ++i)
	{
		concatenated[i] = dest[i];
		counter++;
	}
	/*copy contents of src into concatenated starting from where dest stopped*/
	for (k = 0; src[k] != '\0'; ++k)
	{
		concatenated[counter] = src[k];
	}
	/*Terminating null*/
	concatenated[counter] = '\0';

	return (concatenated);
}
