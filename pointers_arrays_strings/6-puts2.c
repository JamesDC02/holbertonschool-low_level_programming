#include "main.h"
/**
* puts2 - prints a string but skips every other character
* @str: string that is printed
*/

void puts2(char *str)
{
	int i;
	int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	i = 0;

	while (i < length)
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
