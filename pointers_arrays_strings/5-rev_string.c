#include "main.h"
/**
* rev_string -
* @s:
*/

void rev_string(char *s)
{
	int length;
	int left;
	int right;
	char temp;

	length = 0;
	left = 0;


	while (s[length] != '\0')
	{
		length++;
	}

	right = length - 1;

	while (left < right)
	{
		temp = s[left];
		s[left] = s[right];
		s[right] = temp;
		left++;
		right--;
	}
}
