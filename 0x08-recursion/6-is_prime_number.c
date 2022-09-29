#include "main.h"

int _check(int, int);
/**
 * is_prime_number - check if n is a prime number
 * @n: int
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (_check(2, n));
}
/**
 * _check - check if prime
 * @n: number
 * @i: iterator
 * Return: 0 or 1
 */
int _check(int n, int i)
{
	if (i % n == 0 || i < 2)
		return (0);
	else if (n == i - 1)
	{
		return (1);
	}
	else if (i > n)
	{
		return (_check(n + 1, i));
	}
	return (1);
}
