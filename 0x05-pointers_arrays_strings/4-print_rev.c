#include "main.h"

/**
 * print_rev
 * @s- char
 * return: 0
 */
void print_rev(char *s)
{
	int comp = 0;

	while (s[comp] != '\0')
	{
		comp++;
	}

	comp--;

	while (comp >= 0)
	{
		_putchar(s[comp]);
		comp--;
	}
	_putchar('\n');
}
