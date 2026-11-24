#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: array of integers
* @size: number of elements in array
* @cmp: pointer to the function to compare
* Return: -1 if no match or less than or equal to 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
		return (i);
		}
		i++;
	}
	return (-1);
}
