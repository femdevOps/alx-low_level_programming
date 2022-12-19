#include "main.h"

/**
 * swap_int - swaps pointer a for b
 * @a: The first integer checked
 * @b: The second integer checked
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
