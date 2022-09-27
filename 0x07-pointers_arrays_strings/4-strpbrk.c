#include "main.h"
#include <string.h>
/**
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int len = strpbrk(s, accept);
	if(len != NULL)
		return (s);
	else
		return (0);
}
