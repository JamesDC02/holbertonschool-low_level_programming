#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	char n;
	int N;

	n = 'a';
	N = '0';

	while (N <= '9')
	{
	putchar(N);
	N++;
	}
	while (n <= 'f')
	{
	putchar(n);
	n++;
	}
	putchar('\n');
	return (0);
}
