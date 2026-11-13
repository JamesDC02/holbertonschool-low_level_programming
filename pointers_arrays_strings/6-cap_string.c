#include "main.h"
/**
* cap_string - capitalises words of a string
* @s: string to capitalise
* Return:
*/

char *cap_string(char *s)
{
	int cap;
	int i;
	char ch;

	i = 0;
	cap = 1;
	while (s[i] != '\0')
	{
	ch = s[i];

	if (ch == ' ' || ch == '\t' || ch == '\n' ||
	ch == ',' || ch == ';' || ch == '.' || ch == '!' ||
	ch == '?' || ch == '"' || ch == '(' || ch == ')' ||
	ch == '{' || ch == '}')
	{
		cap = 1;
	} else if (cap)
	{
		if (ch >= 'a' && ch <= 'z')
		{
		s[i] = ch - 32;
		}
		cap = 0;
	}
	i++;
	}
	return (s);
}
