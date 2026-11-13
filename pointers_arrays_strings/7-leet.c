#include "main.h"
/**
* leet - encodes a string into 1337
* @s: string to encode
* Return: encoded string
*/

char *leet(char *s)
{
	int i;
	int c;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	i = 0;
	while (s[i] != '\0')
	{
		c = 0;
		while (letters[c] != '\0')
		{
		if (s[i] == letters[c])
		{
		s[i] = leet[c];
		}
		c++;
		}
		i++;
	}
	return (s);
}
