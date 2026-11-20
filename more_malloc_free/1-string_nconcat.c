#include "main.h"
#include <stdlib.h>
/**
* string_nconcat -
* @s1:
* @s2:
* @n:
* Return:
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length1 = 0;
	unsigned int length2 = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	if (n >= length2)
	{
		n = length2;
	}

	concat = malloc(sizeof(char) * (length1 + n + 1));
	if (concat == NULL)
	{
		return(NULL);
	}
	i = 0;
	j = 0;
	while (i < length1)
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		concat[i + j] = s2[j];
		j++;
	}
	concat[i + j] = '\0';
	return (concat);
}
