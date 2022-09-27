#include "main.h"
#include <string.h>
/**
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int s = strpbrk(s, accept);
	if(s != NULL)
		return (s);
	else
		return (0);
}
