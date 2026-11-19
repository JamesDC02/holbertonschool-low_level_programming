#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - returns a pointer to a 2 dimensional array
* @width: width of array
* @height: height of array
* Return: if 0 or NULL, return NULL, otherwise return pointer
*/

int **alloc_grid(int width, int height)
{
	int **pointer;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pointer = malloc(sizeof(int *) * height);
	if (pointer == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		pointer[i] = malloc(sizeof(int) * width);
		if (pointer[i] == NULL)
		{
		while (i > 0)
		{
		i--;
		free(pointer[i]);
		}
		free(pointer);
		return (NULL);
		}
		j = 0;
		while (j < width)
		{
		pointer[i][j] = 0;
		j++;
		}
		i++;
	}
	return (pointer);
}
