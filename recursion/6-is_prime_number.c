#include "main.h"
/**
* _prime_find - find if i is divisible by 1
* @n: number to check
* @i: current number
* Return: 1 if prime, 0 if otherwise
*/
int _prime_find(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (_prime_find(n, i + 1));
}

/**
* is_prime_number - returns 1 if prime, 0 if otherwise
* @n: number to check
* Return: 1 or 0
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_find(n, 2));
}
