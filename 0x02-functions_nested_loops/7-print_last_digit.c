#include "main.h"
/**
 * print_lastdigit - prints last digit of a number
 * return: value
 * @n: int type
 */
int print_last_digit(int n)
{
	int lastdigit = n % 10;

	if (n < 0)
	{
		_putchar((-1 * lastdigit) + '0');
	}
	else
		_putchar(lastdigit + '0');	
	return (lastdigit);
}
