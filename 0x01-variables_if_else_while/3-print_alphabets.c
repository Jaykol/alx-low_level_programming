#include <stdio.h>
#include <stdlib.h>
/**
 * main- main block
 * Return: 0
 */

int main(void)
{
	int x;

	for(x = 'A'; x <= 'Z'; x++)
	putchar(x);
	putchar(tolower(x));
	return (0);
}
