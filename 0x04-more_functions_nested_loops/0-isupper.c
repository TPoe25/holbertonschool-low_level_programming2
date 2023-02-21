#include "main.h"
#include <stdio.h>

/**
 * int_isupper(int c); Checks capital characters
 * @c; interger
 * return: 1, 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
