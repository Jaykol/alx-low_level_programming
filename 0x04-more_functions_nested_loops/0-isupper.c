#include "main.h"
#include <ctype.h>
#include <stdio.h>
/**
 * _isupper - function that checks for uppercase characters
 *
 * @c: int type number
 *
 * Return: 1 if uppercase, else 0
 */

int _isupper(int c)
{
		if (isupper(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
