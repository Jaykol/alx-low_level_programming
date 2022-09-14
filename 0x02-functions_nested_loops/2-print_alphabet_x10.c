#include "main.h"

/**
 * void print_alphabet_x10(void) - print alphabets in lowercase 10x
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (c < 10)
	{
		c = 'a';
		for(c; c <= 'z', c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
