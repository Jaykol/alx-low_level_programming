#include "main.h"
#include <stdio.h>
/*
 * main - main code block
 * Description: code to print _putchar.c
 * Return: 0
 */
int main(void)
{
	char main[] = "main";
	int i = 0;

	while (main[i] != '\0')
	{
		_putchar(main[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
