#include "main.h"
#include <ctype.h>

/**
 *  _isalpha - checks if a character is lower case
 * Return: 1
 * Return: 0
 */

int _isalpha(int c)
{
        char ilower = 'a';
	char iupper = 'A';

        while (ilower <= 'z')
        {
               	while (iupper <= 'Z')
		{
			if(ilower == c || iupper == c)
                	{
                        	return (1);
			}
			else
			{
				return (0);
			}
			iupper++;
		}
		ilower++
	}
        return (0);
}

