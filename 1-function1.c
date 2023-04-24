#include "main.h"
#include <stdio.h>

/**
 * function 1 usint "d" and "i" specifiers
 *
 *
 *  Return: always 0.
 */

void print_integers(int number1, int number2)
{
	printf("number1 : %d\n", number1);
	printf("number2 : %i\n", number2);
}

int main(void)
{
	int number1 = 9876;
	int number2 = -6789;

	print_integers(number1, number2);

	return (0);
}
