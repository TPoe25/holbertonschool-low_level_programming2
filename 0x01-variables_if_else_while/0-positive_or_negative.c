#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Main: Entry Point
 *
 * Description: random digits function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive");
	else if (n == 0)
		printf("%i is zero");
	else if (n < 0)
		printf("%i, is negative\n");
	else

	return (0);
}
