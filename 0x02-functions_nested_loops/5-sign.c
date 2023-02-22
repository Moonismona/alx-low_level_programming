#include "main.h"
/**
 * print_sign - prints the sign of a number.
 *
 * @n: the number in ASCII code.
 *
 * Return: 1 if n is greater than 0, 0 if n is zero, -1 if n is less than 0.
 */
int print_sign(int n)
{
	if (n >= 48)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	_putchat('\n');
}
