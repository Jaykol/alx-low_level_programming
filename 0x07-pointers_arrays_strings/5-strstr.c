#include "main.h"
#include <string.h>
/**
 *
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *r;

	r = strstr(haystack, needle);
	if(r)
		return (r);
	else
		return (0);
}
