#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: input string.
 * Return: no value.
 */

void puts_half(char *str)
{
	int i;
	int n;

	while (str[i])
	{
		i++;
	}
	i++;
	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
	}
	else
	{
		n = i / 2;
	}
	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
