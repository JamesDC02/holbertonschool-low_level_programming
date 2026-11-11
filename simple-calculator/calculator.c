#include <stdio.h>
#include <stdlib.h>
/**
* main - calculator menu
* Return: 0 success
* @menu: calculator menu navigation
* @numA: user inputs first integer for sum
* @numB: user inputs second integer for sum
* @result: result of the two integers
*/

int main(void)
{
	int menu;
	int numA;
	int numB;
	int result;

	/* welcome */
	printf("Welcome to the Calculator!\n");
	printf("Enter an input\n");

	/* menu */
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	/* user enters integer for menu */
	scanf("%d", &menu);
	printf("Choice: %d\n", menu);
	/* integer A for sum */
	/* integer B for sum */

	switch(menu)
	{
	/* quit with 0 */
	case 0:
		printf("Bye!\n");
		break;
	/* addition with 1 */
	case 1:
		printf("A: ");
		scanf("%d", &numA);
		printf("B: ");
		scanf("%d", &numB);
		result = numA + numB;
		printf("Result: %d\n", result);
		break;
	/* subtraction with 2 */
	case 2:
		printf("A: ");
		scanf("%d", &numA);
		printf("B: ");
		scanf("%d", &numB);
		result = numA - numB;
		printf("Result: %d\n", result);
		break;
	/* multiplication with 3 */
	case 3:
		break;
	/* division with 4 */
	case 4:
		break;
	/* if input is invalid */
	default:
		printf("Invalid choice\n");
		break;
	}
	return (0);
}
