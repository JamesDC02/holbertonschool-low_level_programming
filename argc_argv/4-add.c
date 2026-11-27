#include <stdlib.h>
#include <stdio.h>
/**
* main - adds positive numbers
* @argc: argument count
* @argv: argument vector
* Return: 0 on success, 1 on fail
*/

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int j;

	i = 1;
	sum = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
		if (argv[i][j] < '0' || argv[i][j] > '9')
		{
		printf("Error\n");
		return (1);
		}
		j++;
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
