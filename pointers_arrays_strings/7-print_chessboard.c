#include "main.h"
/**
* print_chessboard - prints the pieces of a chessboard
* @a: characters (pieces) of the board
*/

void print_chessboard(char (*a)[8])
{
	int r;
	int c;

	r = 0;
	while (r < 8)
	{
		c = 0;
		while (c < 8)
		{
		_putchar(a[r][c]);
		c++;
		}
		_putchar('\n');
		r++;
	}

}
