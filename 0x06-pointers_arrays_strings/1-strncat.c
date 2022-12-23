#include "main.h"

/**
 * _strncat - concats string 1 and 2, based on n count.
 * @dest: The first string checked
 * @src: The second string checked.
 * @n: The n count
 *
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
