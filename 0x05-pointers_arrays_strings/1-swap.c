#include "main.h"
/*
 * swap_int - funtion that swaps the values of two integers
 * @a: int pointer type
 * @b: int pointer type
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
