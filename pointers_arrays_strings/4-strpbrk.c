#include "main.h"
/**
* _strpbrk - search string to find first matching character
* @s: string of characters
* @accept: string of characters
* Return: returns string after firs matching character
*/

char *_strpbrk(char *s, char *accept)
{
	int i;
	int a;

	i = 0;
	while (s[i] != '\0')
	{
		a = 0;
		while (accept[a] != '\0')
		{
		if (s[i] == accept[a])
		{
		return (s + i);
		}
		a++;
		}
		i++;
	}
	return (0);
}
