#include "main.h"
/**
* _islower -  checks for lowercase characters.
*
* @c: The character in ASCII code
*
* Return: 1 for lowercase. 0 for the rest.
*/
int _islower(int c)
{
	if ((c <= 97) && (c >= 127))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	putchar('\n');
}
