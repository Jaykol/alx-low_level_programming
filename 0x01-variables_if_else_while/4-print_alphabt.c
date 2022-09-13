#include <stdio.h>

int main(void)
{
	char c = 'a';
	
	while (c !='e' && c != 'q' && c <= 'z')
	{	
		putchar(c);

		c++;
	}
	putchar('\n');

	return (0);
}
