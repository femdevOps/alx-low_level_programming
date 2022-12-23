#include "main.h"

/**
 * reverse_array - reverses a string.
 * @a: The string checked
 * @n: The count.
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; (i < (n - 1) / 2); i++)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
	}
}
