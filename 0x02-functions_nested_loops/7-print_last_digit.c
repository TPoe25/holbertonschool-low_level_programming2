#include <stdio.h>
#include "main.h"

/**
 * print_last_digit -
 * @n: n is interger
 * description: prints last digit of number
 * Return: int
 */

int print_last_digit(int n)
{
	int digit = n % 10;

	if (n < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return(digit);
}
