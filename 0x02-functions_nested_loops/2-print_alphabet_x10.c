#include "main.h"

/**
 * main - print alphabets in lowercase 10x
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	int i = 0;

	while (c < 10)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
