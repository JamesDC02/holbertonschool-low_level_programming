#include "main.h"
#include <stdlib.h>
/**
* create_array - creates array of chars and initialises it
* @size: array size
* @c: char to initialise
* Return: pointer to array or NULL if fails
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	array = malloc(sizeof(char) * size);
	i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
