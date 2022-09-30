#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int mul;

	if(argc > 1)
	{
		for (i = 1, i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("Answer = %d\n", mul);
	}
	else if(argc == 1)
		printf("Error\n");
		return (1);
}
