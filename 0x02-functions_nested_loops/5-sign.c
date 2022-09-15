#include "main.h"
/**
 * print_sign - is a function that prints signs of a number
 * Return: 0, 1, -1
 * Description: prints +,-, 0 and return value of the number n
 * @n: int type
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
