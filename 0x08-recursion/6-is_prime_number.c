#include "main.h"

/**
* is_prime_number - determine if a number is a prime number
 * @n: int number
 * Return: 1 if prime, 0 otherwis
*/

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	else if (n == 1)
		return (0);
	else if (n % 2 != 0)
		return (1);
	else
		return (0);
}
