#include "main.h"
#include <stdlib.h>
/**
* str_concat - concatenates 2 strings
* @s1: string 1
* @s2: string 2
* Return: NULL on failure or point to newly allocated space with contents
* of s1 and s2
*/

char *str_concat(char *s1, char *s2)
{
	char *concatenate;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;

	if (s1 == NULL)
	{
		s1 = ("");
	}
	if (s2 == NULL)
	{
		s2 = ("");
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	concatenate = malloc(sizeof(char) * (length1 + length2 + 1));
	if (concatenate == NULL)
	{
		return (NULL);
	}
	while (i < length1)
	{
		concatenate[i] = s1[i];
		i++;
	}
	while (j < length2)
	{
		concatenate[i] = s2[j];
		j++;
		i++;
	}
	concatenate[i] = '\0';
	return (concatenate);
}
