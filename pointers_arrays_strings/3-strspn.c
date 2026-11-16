#include "main.h"
/**
* _strspn - finds length of a prefix substring
* @s: string
* @accept: characters
* Return: number of bytes in segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int find;
	int a;

	i = 0;
	while (s[i] != '\0')
	{
		find = 0;
		a = 0;
		while (accept[a] != '\0')
		{
		if (s[i] == accept[a])
		{
		find = 1;
		break;
		}
		a++;
		}
		if (find == 0)
		{
		return (i);
		}
		i++;
	}
	return (i);
}
