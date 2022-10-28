#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 or a positive integer or  a negative value
 */

int _strcmp(char *s1, char *s2)
{
	int comp_value;

	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			comp_value = (*s1 - *s2);
			break;
		}
		else
		{
			comp_value = 0;
			s1++;
			s2++;
		}
	}
	return (comp_value);
}
