#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - using main function
 * @argc: count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int tot, j;
	unsigned int i;
	char *p;
	int cent[] = {25, 10, 5, 2};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	tot = strtol(argv[1], &p, 10);

	if (!*p)
	{
		for (j = 0; tot > 1;)
		{
			for (i = 0; i < sizeof(cent[i]); i++)
			{
				if (tot >= cent[i])
				{
					j += tot / cent[i];
					tot = tot % cent[i];
				}
			}
		}
		if (tot == 1)
			j++;
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", j);
	return (0);
}
