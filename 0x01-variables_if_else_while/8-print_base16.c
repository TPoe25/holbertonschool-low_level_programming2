#include <stdio.h>

/**
 * main - entry point
 *
 * Description; prints numbers in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char z;

	for (z = '0'; z <= '9'; z++)
		putchar(z);
	for (z = 'a'; z <= 'f'; z++)
		putchar(z);

	putchar('\n');

	return (0);
}
