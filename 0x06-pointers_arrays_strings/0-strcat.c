#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest:pointer to a string
 * @src:pointer to a string
 *
 * Return: pointer to a string
 */
char *_strcat(char *dest, char *src)
{
	int j = 0, k = 0;

	/*find the end of the first string*/
	while (*(dest + j) != '\0')
	{
		j++;
	}
	/*join src at the end of dest*/
	while (*(src + k) != '\0')
	{
		*(dest + j) = *(src + k);
		k++;
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
