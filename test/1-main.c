#include "main.h"
#include <stdio.h>

int main(void)
{
	char *str = "Hello, world!";

	printf("Character:[%C]\n", 'H');
	_printf("Character:[%c]\n", 'H');
	_printf("Character:[%C]\n", 'H');
	_printf("The string is: %s\n", str);
	_printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	return (0);
}
