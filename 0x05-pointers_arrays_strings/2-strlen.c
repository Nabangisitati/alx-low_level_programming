#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: Pointer to a char
 * Return: int
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
	{
		len++;
	}
	return (len);
}
