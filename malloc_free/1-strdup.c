#include "main.h"
#include <stdlib.h>
/**
* _strdup - return pointer to a newly allocated space
* @str: string to duplicate
* Return: pointer to duplicated string or NULL
*/

char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;
	unsigned int length = 0;

	i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	ptr = malloc(sizeof(char) * (length + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i <= length)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
