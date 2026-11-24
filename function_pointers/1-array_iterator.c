#include "function_pointers.h"
/**
* array_iterator - executes a function given as a parameter
* @array: array of integers
* @size: size of array
* @action: pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
