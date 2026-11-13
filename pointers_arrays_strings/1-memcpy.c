#include "main.h"
/**
* _memcpy - copies a memory area
* @dest: new memory area
* @src: original memory area
* @n: amount of bytes
* Return: returns a pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *d;
	unsigned char *s;
	unsigned int i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
