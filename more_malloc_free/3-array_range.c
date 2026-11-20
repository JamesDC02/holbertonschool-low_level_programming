#include "main.h"
#include <stdlib.h>
/**
* array_range - create array of integers
* @min: minimum value
* @max: maximum value
* Return: pointer to new array. NULL on fail or min > max
*/
int *array_range(int min, int max)
{
	int *array;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return(NULL);
	}

	i = 0;
	while (i < size)
	{
		array[i] = min + i;
		i++;
	}
	return(array);
}
