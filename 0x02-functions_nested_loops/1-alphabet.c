#include "main.h"
#include <stdio.h>

/**
 * main- entry point
 *
 * description; prints alphabet
 *
 * return: 
 */

void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	putchar('\n');
}
