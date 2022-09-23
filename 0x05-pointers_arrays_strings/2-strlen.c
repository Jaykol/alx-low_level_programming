#include "main.h"
#include <string.h>
#include <stdio.h>
/*
 *_strlen - return the length of the string
 * @s: char type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = strlen(*s);

	_putchar(len);
	return (len);
}
