#include <stdio.h>

int main(void)
{
	for (int x = 'A'; int x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return 0;
}
