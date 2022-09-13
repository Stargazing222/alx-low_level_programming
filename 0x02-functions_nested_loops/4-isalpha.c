#include "main.h"

/**
 * _isalpha - checks for alphabetic charcter
 *
 * @c: alphabet to check for
 *
 * Return: 1 if alphabet is lower or upper case, other wise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
