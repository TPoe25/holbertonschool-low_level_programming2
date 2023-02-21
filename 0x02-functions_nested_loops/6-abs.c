#include "main.h"

/**
 * _abs - Entry Point
 * @n: variable
 * description: prints absolute value
 * return: int
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
