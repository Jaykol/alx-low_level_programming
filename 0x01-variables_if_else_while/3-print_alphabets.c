#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main- main block
 * Return: 0
 */

int main(void)
{
	char x;

	for(x = 'A'; x <= 'Z'; x++)
	
	putchar(x);
	
	putchar(tolower(x));
	
	putchar('\n');
	
	return (0);
}
