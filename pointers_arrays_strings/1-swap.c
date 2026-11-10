#include "main.h"
/**
* swap_int - swaps a and b
* @a: integer that swaps with b
* @b: integer that swaps with a
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

