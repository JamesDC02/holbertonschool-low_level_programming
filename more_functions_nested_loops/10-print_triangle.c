#include "main.h"
/**
* print_triangle -
* @size:
*/
void print_triangle(int size)
{
	int row;
	int space;
	int hash;

	if (size > 0)
	{
	row = 1;
	while (row <= size)
	{
		space = 0;
		while (space < size - row)
		{
		_putchar(' ');
		space++;
		}
		hash = 0;
		while (hash < row)
		{
		_putchar('#');
		hash++;
		}

		_putchar('\n');
		row++;
	}
	}
	else
	{
		_putchar('\n');
	}
}
