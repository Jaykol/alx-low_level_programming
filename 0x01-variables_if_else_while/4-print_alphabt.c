#include <stdio.h>

int main(void)
{
	char c = 'a';

	for(c; c <= 'z'; c++)
	{
		if (c !='e' && c != 'q')
			putchar(c);
	}
	putchar('\n');
	return (0);
}
