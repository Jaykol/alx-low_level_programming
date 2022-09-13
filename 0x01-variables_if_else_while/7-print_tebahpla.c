#include <stdio.h>
/**
 *
 */

int main(void)
{
	char c = 'a';

	for(c; c <= 'z'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
