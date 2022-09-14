#include "main.h"
#include <ctype.h>

/**
 *  _isalpha - checks if a character is lower case
 * Return: 1 or 0
 * @c: type int
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 61 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

