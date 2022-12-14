#include "main.h"

/**
 * print_last_digit -Prints the last digit of each number.
 *@n: The integer to be checked
 *
 * Return: The last digit of a value
 */

int print_last_digit(int n)
{
	int num = n % 10;

	if (num < 0)
		num *= -1;

	_putchar(num + '0');

	return (num);
}
