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
	for (c = "a", c<="z", c++)
	{
		if(c =="q" || c =="e")
		{
			continue;
		}
	}

	putchar("%d\n",c);
	return (0);
}

