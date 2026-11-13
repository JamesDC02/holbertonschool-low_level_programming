#include "main.h"
/**
* _memset - fills memory with a constant byte
* @s: memory area
* @b: constant byte
* @n: amount of bytes
* Return: returns pointer to memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *ptr;
	unsigned char byte_value;

	ptr = (unsigned char *)s;
	byte_value = (unsigned char)b;

	while (n > 0)
	{
	*ptr = byte_value;
	ptr++;
	n--;
	}

	return (s);
}
