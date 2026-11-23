#include "main.h"
/**
* _sqrt_find - find square root
* @n: number to find
* @i: current number
* Return: the square root
*/
int _sqrt_find(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (_sqrt_find(n, i + 1));
}
/**
* _sqrt_recursion - return the natural square root of a number
* @n: number to return the square root of
* Return: square root of n
*/

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_find(n, 0));
}
