#include <stdio.h>
#include <stdlib.h>
/**
* main - calculator menu
* Return: 0 success
*/

int main(void)
{
	int menu;
	/** name: menu
	* type: int
	* size: 4 bytes
	* value: user input
	* scope: main
	* address: 0x16da3b1d8
	*/

	/* welcome */
	printf("Welcome to the Calculator!\n");
	printf("Enter an input\n");

	/* menu */
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	/* user enters integer */
	scanf("%d", &menu);

	switch(menu)
	{
	/* quit with 0 */
	case 0:
		printf("Choice: %d\n", menu);
		printf("Bye!\n");
		break;

	default:
		printf("%d is not valid\n", menu);
		break;
	}
	return (0);
}
