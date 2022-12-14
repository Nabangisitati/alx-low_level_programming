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
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	/*Fill Terminating null if src ended before n bytes could be reached*/
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
