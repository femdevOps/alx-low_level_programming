#include "main.h"

/**
 * string_toupper - converts string to uppercase.
 * @s: The string to be checked
 *
 * Return: 0
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
