#include "main.h"

/**
 * string_toupper - converts a lowercase char to uppercase in a word
 * @b:point to a char string
 * Return:char pointer
 */

char *string_toupper(char *b)
{
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] >= 'a' && b[i] <= 'z')
		{
			b[i] = b[i] - 32;
		}
		i++;
	}
	return (b);
}
