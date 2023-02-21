#include "main.h"

/**
 * _islower - function checks if character is lowercase
 * @c: int character to be checked
 *
 * Return: 1 if check is true and 0 if check is false
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
