#include "main.h"

/**
 * _strcat - concats string 1 and 2
 * @dest: The first string checked
 * @src: The second string checked.
 *
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (a);
}
