#include <stdio.h>
/**
 * main -main block
 * Return: 0
 *
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf('%i', i);

		i++;
	}
	putchar('\n');

	return (0);
}
