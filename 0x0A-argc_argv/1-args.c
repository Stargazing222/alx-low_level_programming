#include <stdio.h>

/**
 * main - using main function
 * @argc: integer
 * @argv: string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	argc -= 1;
	printf("%d\n", argc);
	return (0);
}
