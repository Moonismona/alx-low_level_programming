#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n: the number of times the character \ should be printed.
 */

void print_diagonal(int n)
{
	char c;
	int i;

	for (c = 0; c <= n)
	{
		_putchar('\');
		for (i = 0; i < n)
		{
			_putchar(' ');
			i++;
		}
		c++;
	}
	_putchar('\n');
}

