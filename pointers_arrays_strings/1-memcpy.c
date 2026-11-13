#include "main.h"
/**
* _memcpy -
* @dest:
* @src:
* @n:
* Return:
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
