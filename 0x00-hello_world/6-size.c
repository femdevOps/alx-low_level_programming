#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints sizes of data type
 * Return: 0
 */

int main(void)
{
	char charType;
	int intType;
	long int longintType;
	long long int longlongintType;
	float floatType;

	printf("Size of a char: %zu bytes\n", sizeof(charType));
	printf("Size of an int: %zu bytes\n", sizeof(intType));
	printf("Size of a long int: %zu bytes\n", sizeof(longintType));
	printf("Size of a long long int: %zu byte\n", sizeof(longlongintType));
	printf("Size of a float:%zu byte\n", sizeof(floatType));
	return (0);
}

