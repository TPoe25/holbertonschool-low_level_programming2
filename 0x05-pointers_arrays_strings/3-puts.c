#include "main.h"

/**
 * _puts- prints string and new line
 * @str: char
 * Return: 0
 */
void _puts(char *str)
{
	int place;

	for (place = 0; *(str + place) != '\0'; place++)
		_putchar(*(str + place));
	_putchar('\n');
}
