#include <stdio.h>

/**
 * main- entry point
 *
 * description; printing single digit numbers of base ten starting from zero
 *
 * return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		printf("%d", x);

	printf("\n");

	return (0);
}
