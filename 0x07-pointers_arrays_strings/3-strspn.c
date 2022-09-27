#include "main.h"
#include <string.h>

/**
 * _strspn - a function that gets the length of a 
 * prefix substring
 * @s: string to be scanned
 * @accept: string to be matched
 * Return: returns number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = strspn(s, accept);
	return (len);
}
