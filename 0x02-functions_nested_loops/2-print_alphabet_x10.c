#include "main.h"
/**
* print_alphabet_x10 - Prints the alphabet 10 times.
*
* Return: Always 0
*/
void print_alphabet_x10(void)
{
	int letter, c;

		for (letter = 0; letter <= 9; letter++)
	{
		for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
	}
}
