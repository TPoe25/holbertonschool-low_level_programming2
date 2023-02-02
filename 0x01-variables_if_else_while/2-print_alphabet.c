#include <stdio.h>
/*
 * main - printing out lowercase alphabet
 *
 * Description: printing lowercase letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lil;

	for (lil = 'a'; lil = 'z'; lil++)
		putchar(lil);

	putchar('\n');
	return (0);
}
