#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabets
 * Return: 0
 */

int main(void)
{
	int c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
