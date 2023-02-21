#include <stdio.h>
#include "main.h"

/**
 * more_numbers-
 * description- prints 0 thru 14 ten times
 * return: 0
 */
void more_numbers(void)
{
	int x;
	int z;

	for (z = 0; z < 10; z++)
	{
		for (x = 0; x <=14; x++)
		{
			if (x > 9)
			_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	_putchar('\n');
	}
}
