#include "main.h"
#include <string.h>
/**
 *
 */
char *_strpbrk(char *s, char *accept)
{
	char *c;

	c = strpbrk(s, accept);
	if(c != NULL)
		return (*c);
	else
		return (0);
}
