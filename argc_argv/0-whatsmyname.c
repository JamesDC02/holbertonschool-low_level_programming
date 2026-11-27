#include <stdlib.h>
#include <stdio.h>
/**
* main - prints program name
* @argc: argument count
* @argv: argument vector
*/

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
