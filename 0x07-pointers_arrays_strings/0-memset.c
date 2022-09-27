#include "main.h"
#include <string.h>

char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		memset(s, 'b', n);
		return (s);
	}
	return (0);
}
