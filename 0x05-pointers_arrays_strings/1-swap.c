#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps value of two intergers
 * @a -interger
 * @b- interger
 * return: always 0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
