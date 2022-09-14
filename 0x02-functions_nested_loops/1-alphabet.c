#include "main.h"
/**
 * prints alphabet in lowercase using _putchar
 * print_alphabet - prints alphets in lower case using _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
