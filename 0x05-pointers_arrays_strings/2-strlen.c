#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: Pointer to a char
 * Return: int
 */

int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
