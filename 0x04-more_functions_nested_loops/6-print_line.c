#include "main.h"

/**
 * print_line - prints a line in the terminal.
 * @n: the number of times the character _ should be printed.
 */

void print_line(int n)
{
	char c;

	for (c = 0; c < n; c++)
	{
		_putchar('_');
		_putchar('\n');
	}
}


