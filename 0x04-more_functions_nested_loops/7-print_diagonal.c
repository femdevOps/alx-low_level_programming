#include "main.h"

/**
 * print_diagonally - Prints diagonally when n is initialized.
 * @n: The integer to be checked.
 *
 * Return: void
 *
 */

void print_diagonal(int n)
{
	int i;

	if ( n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
}
