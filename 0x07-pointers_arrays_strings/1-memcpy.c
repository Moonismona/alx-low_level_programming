#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: destination of the memory area.
 * @src: source of the memory area.
 * @n: number of bytes to be copied.
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *i = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (i);
}
