#include"main.h"

/**
 * _islower - prints true for lower alphabets.
 *@c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= "a" && c <= "z")
		return (1);
	else
		return (0);
}
