#include "main.h"
#include <ctype.h>

/**
 *  _isalpha - checks if a character is lower case
 * Return: 1
 * Return: 0
 */

int _isalpha(int c)
{
        char i = 'a';

        while (i <= 'z')
        {
                if(i == c)
                {
                        return (1);
                }
                else
                {
                        return (0);
                }
                i++;
        }
        return (0);
}

