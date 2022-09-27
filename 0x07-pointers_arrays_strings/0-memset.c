#include "main.h"
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	int n;

	memset(s, 'b', n);
	return (s);
}
