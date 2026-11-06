#include "main.h"
/**
* _isalpha - check if c is a letter, lower or upper
* @c: parameter for letter function
* Return: 1 if a letter, lower or upper, 0 if not
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
