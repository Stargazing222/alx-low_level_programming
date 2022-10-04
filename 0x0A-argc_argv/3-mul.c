#include <stdio.h>
#include <stdlib.h>

/**
 * main - using main function
 * @argc: integer
 * @argv: string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int mul1, mul2, res;

	mul1 = mul2 = 0;
	if (argc == 3)
	{
		mul1 = atoi(argv[1]);
		mul2 = atoi(argv[2]);
		res = mul1 * mul2;
		printf("%d\n", res);
		return (0);
	}
	else
		printf("Error\n");
	return (1);
}
