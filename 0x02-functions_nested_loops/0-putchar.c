#include "main.h"
#include <stdio.h>
/*
 * main - main code block
 * Description: code to print _putchar.c
 * Return: 0
 */
int main(void)
{
	char _putchar[] = "main";
	int i = 0;

	while (_putchar[i] != '\0')
	{
		_putchar(_putchar[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
