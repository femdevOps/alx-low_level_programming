#include "main.h"

/**
 * print_triangle - Prints triangle when size is initialized.
 * @size: The integer to be checked.
 *
 * Return: void
 *
 */

void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i < n; i++)
	{
		for (spaces = size - i; spaces >= 1; spaces--)
		{
			_putchar(' ');
		for (j = 1; j < I; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
