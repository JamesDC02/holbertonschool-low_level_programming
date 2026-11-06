#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_last_digit - prints last digit of value
* @n: value to check
* Return: last digit of value
* int = 4 bytes
*/
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
