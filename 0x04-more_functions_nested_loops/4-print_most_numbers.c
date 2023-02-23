#include "main.h"

/**
 * print_most_numbers - that prints the numbers, from 0 to 9.
 *
 * Return: no value.
 */

void print_most_numbers(void)
{
	char c;

	while (c = '0'; c <= '9')
	{
		while (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
