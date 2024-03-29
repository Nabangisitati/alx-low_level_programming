#include "main.h"

/**
 * _strcpy - copies a string into another
 * @dest: destination string
 * @src: source string
 * Return: pointer to a string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
