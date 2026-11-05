#include "main.h"
/**
* print_alphabet - entry point
* char (n) = 1 byte
* each char then represents 1 byte
* Total: 270 bytes
* Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char n;
	int i;

	i = 0;
	while (i < 10)
	{
		n = 'a';
		while (n <= 'z')
		{
		_putchar(n);
		n++;
		}
	_putchar('\n');
	i++;
	}
}
