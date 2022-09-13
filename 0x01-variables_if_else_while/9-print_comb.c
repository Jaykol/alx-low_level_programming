#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int i,j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i);
			putchar(',');
			putchar(j);
		}
	}
	putchar('\n');
	return (0);
}
