#include <stdio.h>
/**
* main - Print all single digit numbers
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int digit;

	for (digit = 0; digit <= 9; digit++)
	{
		printf("%i", digit);
	}
	putchar('\n');
	return (0);
}
