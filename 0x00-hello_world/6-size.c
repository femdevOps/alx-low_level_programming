#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints sizes of data type
 * Return: 0
 */

int main(void)
{
      int intType;
      float floatType;
      double doubleType;
      char charType;
      
      printf("Size of a int: %zu bytes\n", sizeof(intType));
      printf("Size of a float: %zu bytes\n", sizeof(floatType));
      printf("Size of a double: %zu bytes\n", sizeof(doubleType));
      printf("Size of a char: %zu byte\n", sizeof(charType));
      return (0);
}

