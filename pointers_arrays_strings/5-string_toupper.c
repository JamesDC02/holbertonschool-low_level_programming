#include "main.h"
/**
* string_toupper - changes lowercase to uppercase
* @s: string to change
* Return: returns modified string
*/

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
		s[i] -= 32;
		}
		i++;
	}
	return (s);
}
