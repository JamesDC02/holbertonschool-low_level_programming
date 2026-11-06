#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _abs - compute absolute integer
* @n: intger to check
* Return: absolute value of n
*/
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	return (n);
}
