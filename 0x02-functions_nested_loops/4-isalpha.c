#include "main.h"
#include <stdio.h>

/**
 *  _isalpha - entry point
 *  description; checks for alpahbetic character
 *  Return: 1 ic c is a letter, 0 if else
 */
int _itsalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
