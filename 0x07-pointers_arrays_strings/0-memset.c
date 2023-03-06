#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @n: the number of cytes to be filled.
 * @b: the desired value.
 * @s: adress of memory to be filled.
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
