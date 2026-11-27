#include <stdlib.h>
#include <stdio.h>
/**
* main - multiply two numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 on success, 1 on error
*/

int main(int argc, char **argv)
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
}
