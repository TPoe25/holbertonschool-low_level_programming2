#include "main.h"

/**
 * print_most_numbers - Prints numbers but 2 and 4
 * return: result
 */
void print_most_numbers(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		if (number != 2 && number != 4)
			_putchar((number % 10) + '0');
	}
	_putchar('\n');
}
