#include  "main.h"

/**
 * _length - calculates the length
 * @s: string
 * Return: length of string
 */
int _length(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (1 + _length(s));
	}
	return (0);
}

/**
 * _check - checks the string
 * @str: string
 * @n: num
 * @i: iterator
 * Return: 0 or 1
 */
int _check(char *str, int n, int i)
{
	if (i >= n)
		return (1);
	if (str[i] == str[n])
		return (_check(str, n - 1, i + 1));
	return (0);
}

/**
 * is_palindrome - shows if string is palindrome or not
 * @s: string
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	int n = _length(s);
	int i = 0;

	return (_check(s, n - 1, i));
}
