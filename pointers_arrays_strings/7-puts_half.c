#include "main.h"
/**
* puts_half - prints half a string
* @str: string to be printed
*/

void puts_half(char *str)
{
	int length;
	int half_length;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	half_length = length / 2;
	i = 0;

	while (i < half_length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
