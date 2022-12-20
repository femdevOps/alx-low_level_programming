#include "main.h"

/**
 * _puts - Prints string then a new line
 * @str: The char checked
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
