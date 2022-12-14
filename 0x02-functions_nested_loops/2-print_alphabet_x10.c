#include "main.h"

/**
 * print_alphabet_x10 -prints all alphabetx10
 *
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char low;

	while (count < 10)
	{
		for (low = 'a'; low <= 'z'; low++)
			_putchar(low);
		count++;
		_putchar('\n');
	}
}
