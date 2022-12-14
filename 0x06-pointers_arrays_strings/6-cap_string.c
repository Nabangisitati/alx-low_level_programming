#include "main.h"

/**
 * cap_string - capitalizes each word of  a string
 * @s: pointer to a char
 * Return: char pointer
 */

char *cap_string(char *s)
{
	int index = 0;

	while (s[index])
	{
		/*Check for chars that are already capital*/
		while (s[index] >= 'A' && s[index] <= 'Z')
		{
			index++;
		}
		/*Check for word separators*/
		if (s[index - 1] == ',' || s[index - 1] == ';'
		    || s[index - 1] == '.' || s[index - 1] == '!'
		  || s[index - 1] == '?' || s[index - 1] == '"'
		  || s[index - 1] == '(' || s[index - 1] == ')'
		 || s[index - 1] == '{' || s[index - 1] == '}'
		 || s[index - 1] == '\n' || i == 0
		|| s[index - 1] == ' ' || s[index - 1] == '\t')
		{
			s[index] = s[index] - 32;
		}
		index++;
	}
	return (s);
}
