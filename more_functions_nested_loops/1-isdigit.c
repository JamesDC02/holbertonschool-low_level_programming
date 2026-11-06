#include "main.h"
/**
* _isdigit - checks if c is a digit
* @c: int used in parameter for function
* Return: 1 if a digit, 0 if not a digit
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
