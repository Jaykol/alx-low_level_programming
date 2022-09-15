#include "main.h"
#include <stdio.h>
/**
 * _abs - function computes absolute value of an integer
 * return: -ve value or +ve value
 * @i: int type
 */
int _abs(int i)
{

	if (i < 0)
	{
		return (i * -1);
	}
	else
		return (i);
}
