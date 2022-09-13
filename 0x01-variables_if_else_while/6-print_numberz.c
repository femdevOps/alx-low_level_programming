#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all numbers using char
 * Return: 0
 */

int main(void)

{
	int c = 0;

	while (c <= 9)
	{
		putchar(c);
		c++;
	}
	putchar("\n");
	return (0);
}

