#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabets but exempt q and e.
 * Return: 0
 */

int main(void)
{
        int c = 'a';
	do {
		if (c == 'e' || c == 'q')
		{
			continue;
		}
	}
        while (c <= 'z')
	{
		putchar(c);
		c++;
        }
	putchar('\n');
	return (0);
}

