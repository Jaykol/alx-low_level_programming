#include "main.h"
#include <ctype.h>

/**
 *
 *  * _isdigit - A function that checks for a digit (0 through 9).
 *
 *   * @c: An input integer
 *
 *    * Return: 1 if c is a digit or 0 otherwise
 *
 *     */

int _isdigit(int c)

{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == c)
		{
			return (1);
		}
		else
			return (0);
	}
	return (0);

}
