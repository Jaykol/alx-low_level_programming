#include "main.h"
#include <ctype.h>

/**
 *  _islower - checks if a character is lower case
 * Return: 1
 * Return: 0
 */

int _islower(int c)
{
	if (c <= 123 || c >= 97)
	{
		return(1);
	}
	return (0);
}
