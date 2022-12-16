#include "main.h"

/**
 * print_line - Prints the line when n is initialized.
 * @n: The integer to be checked.
 *
 * Return: void
 *
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
