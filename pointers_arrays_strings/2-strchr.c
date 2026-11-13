#include "main.h"
/**
* _strchr - locates a string
* @s: string
* @c: character to locate
* Return: returns first occurrence of character or NULL
*/

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
		return (s + i);
		}
		i++;
	}
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);
}
