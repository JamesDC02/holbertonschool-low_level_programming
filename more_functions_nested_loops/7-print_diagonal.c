#include "main.h"
/**
* print_diagonal - prints space followed by backslash
* @n: parameter for function
*/
void print_diagonal(int n)
{
	int slash;
	int space;

	if (n > 0)
	{
	slash = 0;
	while (slash < n)
	{
		space = 0;
		while (space < slash)
		{
		_putchar(' ');
		space++;
		}
		_putchar('\\');
		_putchar('\n');
		slash++;
	}
	}
	else
	{
	_putchar('\n');
	}

}
