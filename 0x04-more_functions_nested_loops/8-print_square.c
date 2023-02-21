#include "main.h"

/**
 * print_square
 * @size: interger
 * return: void
 */
void print_square(int size)
{
	int x;
	int r;

	if (size <= 0)
		_putchar('\n');
	for (x = size; x > 0; x--)
	{
		for (r = size; r > 0; r--);
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
