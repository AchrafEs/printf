#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * The d and i conversion specifiers are used to output integers.
 *  The d specifier used to print decimal integer.
 *  The i specifier used to print integers in either decimal
 *  or octal or hexadicimal format
 *  just based on the prefix of the output value.
 *  Return: always 0.
 */

int main(void)
{
	int number1 = 9876;
	int number2 = -6789;

	printf("number1 using 'd' : %d\n", number1);
	printf("number2 using 'i' : %i\n", number2);

	return (0);
}
