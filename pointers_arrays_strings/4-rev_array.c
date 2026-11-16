#include "main.h"
/**
* reverse_array - reverses the contents of an array
* @a: array
* @n: number of elements of the array
*
*/

void reverse_array(int *a, int n)
{
	int start;
	int end;
	int tmp;

	start = 0;
	end = n - 1;
	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}
}
