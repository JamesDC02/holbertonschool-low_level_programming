#include <stdlib.h>
#include <stdio.h>
/**
* main - prints 1 - 100
* multiples of 3 print Fizz
* multiples of 5 print Buzz
* multiples of both print FizzBuzz
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
		printf("FizzBuzz");
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
	printf("\n");
	return (0);
}
