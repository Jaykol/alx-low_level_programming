#include "main.h"
#include <ctype.h>


/**
 *
 *  * _isdigit - Check for digits (0 through 9)
 *
 *   * @c: int type param
 *
 *    * Return: 1 if digit, else 0
 *
 *     */

int _isdigit(int c)

{
	int x;

	for (x = 0; x <= 9; x++)
	{
		if (c == x)
			return (1);
		return (0);
}
