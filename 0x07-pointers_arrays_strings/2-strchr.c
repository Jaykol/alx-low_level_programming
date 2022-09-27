#include "main.h"
#include <string.h>

/**
 * char *_strchr - function that finds a character in a string
 * @s: pointer to a string
 * @c: character to be found
 * Return: returns null if character is not found or returns character
 *
 */

char *_strchr(char *s, char c)
{
	s = strchr(s, c);
	if (s != 0)
		return (s);
	else
		return (0);
}
