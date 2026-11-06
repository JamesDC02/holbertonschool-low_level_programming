#include "main.h"
/**
* more-numbers - print numbers 0-14, ten times
*/

void more_numbers(void)
{
	char n;
	int i;

	i = 0;
	while (i < 10)
	{
		n = '0';
		while (n <= '14')
		{
		_putchar(n);
		n++;
		}
	_putchar('\n');
	i++;
	}
}
