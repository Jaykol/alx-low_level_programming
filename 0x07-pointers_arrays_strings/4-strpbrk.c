#include "main.h"
#include <string.h>
/**
 * _strpbrk - function searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: pointer to string containing characters to match
 * Return: returns a pointer to the byte in s that matches one of 
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *c;

	c = strpbrk(s, accept);
	
	if(c)
	{
		return (c);
	}
	else
		return (0);
}
