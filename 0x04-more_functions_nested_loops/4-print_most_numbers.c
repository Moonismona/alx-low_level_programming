#include "main.h"

/**
 * print_most_numbers - that prints the numbers, from 0 to 9.
 *
 * Return: no value.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9)
	{
		if (n != 2 && n != 4)
		{
			_putchar(n);
		}
		n++;
	}
	_putchar('\n');
}
