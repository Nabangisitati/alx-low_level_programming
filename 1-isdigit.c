#include "main.h"

/**
 * _isdigit - checks if a char is a value between 0 to 9
 * @c: Char to be checked
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
