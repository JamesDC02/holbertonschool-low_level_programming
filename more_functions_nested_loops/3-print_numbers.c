#include "main.h"
/**
* print_numbers - entry point
* @n: variable for function
* char (n) = 1 byte
*/

void print_numbers(void)
{
	char n;

	n = '0';
	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
