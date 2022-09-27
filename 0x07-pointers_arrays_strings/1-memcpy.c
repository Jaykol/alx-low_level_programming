#include "main.h"
#include <string.h>

/*
 * char *_memcpy - a function that copys memory area
 * @dest: destination of memory area
 * @src: memory area source to be copued
 * @n: number of bytes
 * Return: returns pointer of destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
