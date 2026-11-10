#include "main.h"
/**
* _atoi - converts string to integer
* @s: string to convert
* Return: result times signs
*/

int _atoi(char *s)
{
	int i;
	int signs;
	unsigned int result;
	int digits;

	i = 0;
	signs = 1;
	result = 0;
	digits = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
		{
		signs *= -1;
		}

		if (s[i] >= '0' && s[i] <= '9')
		{
		digits = 1;
		result = (result * 10) + (s[i] - '0');
		}
		else if (digits)
		{
		break;
		}
		i++;
	}
	return (result * signs);
}
