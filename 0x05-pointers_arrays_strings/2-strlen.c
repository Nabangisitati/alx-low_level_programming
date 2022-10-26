#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: Pointer to a char
 * Return: int
 */

int _strlen(char *s)
{
	int i;
	int len = 0;

	for (i = 0; *(*s + i) != '\0'; ++i)
	{
		len = i;
	}
	return (len);
}
