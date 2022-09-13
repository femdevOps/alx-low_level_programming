#include <stdio.h>

/**
 * main - Entry point
 * Description: write alphabet in reverse
 * Return: 0
 */

int main(void)

{
	int i = 'z';

	while (i >= 'a')
	{
		putchar(i);
		--i;
	}
	putchar(i);
	return (0);
}
