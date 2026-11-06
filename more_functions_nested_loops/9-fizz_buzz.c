#include <stdlib.h>
#include <stdio.h>
/**
*/
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i > 1)
		{
		printf(" ");
		}
		if (i % 3 == 0 && i % 5 == 0)
		{
		printf("Fizzbuzz");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz");
		}
		else if (i % 5 == 0)
		{
		printf("Buzz");
		}
		else
		{
		printf("%d", i);
		}
	}
	return (0);
}
