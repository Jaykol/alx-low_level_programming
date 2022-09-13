#include <stdio.h>
/**
 *
 */

int main(void)
{
	char c = 'z';

	for (c; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
