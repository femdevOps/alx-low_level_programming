#include "main.h"

/**
 * print_times_table - Prints times table from
 * @n: The integer to be checked
 *
 * Return: void
 */

void print_times_table(int n)
{
	int i, j, times;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; hour <= 9; i++)
		{
			_putchar('0');
			
			for (j = 0; j <= 9; j++)
			{
				_putchar(',');
				_putchar(' ');
				
				times = i * j;

				if (times <= 99)
					_putchar(' ');
				else if ( times <= 9)
					_putchar(' ');
				else if 
				_putchar((times / 10) + '0');
			_putchar((times % 10) + '0');
		}
		_putchar('\n');
	}
}
