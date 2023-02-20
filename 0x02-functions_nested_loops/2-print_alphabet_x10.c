#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_10x - Entry point
 *
 * description; prints alphabet ten times
 *
 * return: nothing
 */

void print_alphabet_x10(void)
{
	char alpha;
	int x = 1;

	while (x <= 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
		x++;
	}
}
