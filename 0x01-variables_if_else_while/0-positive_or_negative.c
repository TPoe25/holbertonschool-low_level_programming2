#include <stdio.h>
#include <stdlib.h>
#include <time.h>


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
	int g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	D = n % 10;

	if (g > 0)
		printf("%d is positive")
	else if (g == 0)
		printf("%d is zero")
	else if (g < 0)
		printf("%d is negative")
	return (0);
}
