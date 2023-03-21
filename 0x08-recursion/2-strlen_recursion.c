#include "main.h"

/**
 * _strlen_recursion - finds length of a string recursively
 * @s:pointer to string
 *
 * Return: integer
 */
int _strlen_recursion(char *s)
{
	int len;

	/*base case*/
	if (*s == '\0')
	{
		return (0);
	}
	else 
	{
		len = 1 + _strlen_recursion(s + 1);
		return (len);
	}
}
