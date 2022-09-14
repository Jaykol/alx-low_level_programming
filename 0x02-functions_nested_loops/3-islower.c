#include "main.h"
#include <ctype.h>

/**
 *  _islower - checks if a character is lower case
 * Return: 1
 * Return: 0
 */

int _islower(int c)
{
	c = 'a';

	while (c <= 'z')
	{
		if(islower(c))
		{
			return (1);
		}
		else
		{
			return (0);
		}
		c++;
	}
	return (0);
}
