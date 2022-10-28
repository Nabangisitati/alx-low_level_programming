#include "main.h"

/**
 * _strncpy - copies n bytes of a string
 * @dest:Buffer destination where the string is to be copied
 * @src:source of String to be copied
 * @n:no. of char to be copied
 * Return:a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; ++i)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
