#include "main.h"

/**
 * _strlen - Finds the length of a string
 * @s:string whose length is to be found
 *
 * Return: int string length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
