#include "main.h"
#include <stdio.h>

/**
 * int_strlen
 * *s - value of char
 * return
 */
int _strlen(char *s)
{
	int chrval = 0;

	while (s[chrval] != '\0')
	{
		chrval++;
	}
	return (chrval);
}
