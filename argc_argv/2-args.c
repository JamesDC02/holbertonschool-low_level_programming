#include <stdlib.h>
#include <stdio.h>
/**
* main - prints all arguments recieved
* @argc: argument count
* argv: argument vector
* Return: 0 on success
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
