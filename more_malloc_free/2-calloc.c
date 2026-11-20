#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocates memory for an array
* @nmemb: elements in array
* @size: size in bytes
* Return: NULL on failure or size of 0, if success, pointer to memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}
