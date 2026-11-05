#include "main.h"
/**
* print_alphabet - entry point
* char (n) = 1 byte
* each character then represents 1 byte 
* including ("\n") 
* Total: 27 bytes
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char n;

	n = 'a';
	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
