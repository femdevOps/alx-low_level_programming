#include "main.h"

/**
 * more_numbers - Prints numbers from 0 to 14, ten times
 *
 * Return: void
 *
 */

void more_numbers(void)
{
	int n = 0;
	char num;

	while (n < 10)
	{
		for (num = '0'; num <= '14'; num++)
		{
			_putchar(num);
			if (num >= 10)

		}
		_putchar('\n');
}
