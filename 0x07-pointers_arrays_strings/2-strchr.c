#include "main.h"
#include <string.h>

/**
 *
 *
 */

char *_strchr(char *s, char c)
{
	strchr(s, c);
	if (c == 0)
		return NULL;
	else
		return (s);
}
