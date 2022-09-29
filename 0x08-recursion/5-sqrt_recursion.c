#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - prints x the square root of y
 * @n: number
 * Return: x square root of y or -1
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - squares i
 * @n: num
 * @i: iterator
 * Return: sqrt or -1
 */
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}

