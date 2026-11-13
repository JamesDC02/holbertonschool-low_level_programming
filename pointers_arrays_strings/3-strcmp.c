#include "main.h"
/**
* _strmcp - compares a string
* @s1: string 1
* @s2: string 2
* Return: returns difference of ASCII characters
*/

int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
		return (s1[a] - s2[a]);
		}
		a++;
	}

	return (s1[a] - s2[a]);
}
