#include <stdio.h>
/**
 * prints alphabet in lowercase using _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c = 'z')
	{
		_putchar(c);
		c++;
	}
	_putchat('\n');
	return (0);
}
