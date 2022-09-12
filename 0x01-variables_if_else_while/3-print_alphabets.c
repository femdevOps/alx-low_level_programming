#include <stdio.h>

/**
 * main - Entry point
 * Description: print all alphabets in uppercase.
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
	c = 'A';
	while (c <= 'Z')
	{
		putchar(c);
		c++;
	}
        putchar('\n');
        return (0);
}

