#include "main.h"
/**
* _strstr - locates a substring
* @haystack: string 1
* @needle: string 2
* Return: located substring or NULL if not found
*/

char *_strstr(char *haystack, char *needle)
{
	int i;
	int a;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	i = 0;
	while (haystack[i] != '\0')
	{
		a = 0;
		while (needle[a] != '\0' &&
		haystack[i + a] == needle[a])
		{
		a++;
		}
		if (needle[a] == '\0')
		{
		return (haystack + i);
		}
		i++;
	}
	return (0);
}
