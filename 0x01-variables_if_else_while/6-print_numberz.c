#include <stdio.h>

/**
 * main - entry point
 *
 * description; prints all single digit numbers base ten starting from zero
 *
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	putchar('\n');

	return (0);
}
