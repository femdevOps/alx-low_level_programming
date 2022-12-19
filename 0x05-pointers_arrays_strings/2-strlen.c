#include "main.h"

/**
 * _strlen - Prints the length of s
 * @s: The integer checked
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int len = 0;

	for (; *s++;)
		len++;
	return (len);
}
