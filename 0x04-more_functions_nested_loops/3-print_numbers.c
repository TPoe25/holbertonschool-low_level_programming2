#include <stdio.h>
#include "main.h"

/**
 * print_numbers(void) prints numbers
 * description- prints zero thru nine
 * return: numbers
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar((a % 10) + '0');
	}
	_putchar('\n');
}
