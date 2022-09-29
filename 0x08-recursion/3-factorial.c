#include "main.h"

/**
 * factorial - prints the factorial
 * @n: number
 * Return: factorial of number or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (factorial(n));
}
