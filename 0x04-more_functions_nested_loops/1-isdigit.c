#include "main.h"
#include <stdio.h>

/**
 * int _isdigit(int c);
 * @c- what progam is checking
 * return: c if 1, otherwise 0
 */
int _isdigit(int c)
{
	if (c > 47 && c <58)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
