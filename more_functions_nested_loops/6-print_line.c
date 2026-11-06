#include "main.h"
/**
* print_line - prints '_' until '0'
* @n: parameter for function
*/
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');

}

