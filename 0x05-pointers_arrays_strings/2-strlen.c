#include "main.h"

/**
 * _strlen - Prints the length of a string
 * @s: Pointer to a char
 * Return: int
 */

int _strlen(char *s)
{
	int i = 0;
	
	for (s; *s != '\0'; s++)
	{
		i++;
	}
	return (i);
}
