# "main.h"

/**
 * main - print alphabets in lowercase 10x
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	char c = 'a';
	
	for(c; c <= 'z'; c++)
	{
		while (c <= 10)
		{
			_putchar(c);
		}
		_putchar('\n');
		return (0);
	}
}
