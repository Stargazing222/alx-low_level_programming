#include <stdio.h>
#include <stdlib.h>

/**
 * main - using main function
 * @argc: argument count
 * @argv: argument vector, array of strings
 * Description: If there is a character it prints error if not it adds it
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int sum, i;
	char *p;
	int num;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; argv[i]; i++)
		{
			num = strtol(argv[i], &p, 10);
			if (!*p)
				sum += num;
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
