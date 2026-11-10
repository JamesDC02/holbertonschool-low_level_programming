#include "main.h"
/*
* _strlen - return length of string.
* @s: string to be returned.
*
* Return: length.
*/

int _strlen(char *s)
{
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
