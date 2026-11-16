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

	ptr = malloc(sizeof(char) * (length + 1));
	i = 0;

	if (ptr && str == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}

	while (i <= length)
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
