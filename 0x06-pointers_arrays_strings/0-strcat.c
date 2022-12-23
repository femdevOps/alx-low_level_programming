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
	int a;

	for (a = 0; src[a] != '\0'; a++)
		dest[a] += src[a];
	dest[a] = '\0';

	return (dest);
}
