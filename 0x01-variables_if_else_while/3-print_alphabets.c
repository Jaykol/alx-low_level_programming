#include <stdio.h>

int main(void)
{
	int x;

	for(x = 'A'; x <= 'Z'; x++)
	putchar(x);
	putchar(tolower(x));
	return (0);
}
