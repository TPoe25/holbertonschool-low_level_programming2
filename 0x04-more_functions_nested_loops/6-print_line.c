#include "main.h"
#include <stdio.h>

/**
 * print_line - prints line
 * @n- interger
 * description:
 * return: 0
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
