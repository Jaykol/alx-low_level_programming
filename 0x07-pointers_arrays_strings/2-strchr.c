#include "main.h"
#include <string.h>

/**
 *
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
