#include "main.h"
/**
* puts_half - prints half a string
* @str: string to be printed
*/

void puts_half(char *str)
{
	int length;
	int half;
	int i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		half = length / 2;
	}
	else
	{
		half = (length + 1) / 2;
	}

	i = half;

	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
