#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - finds first matching char in string
 * @s: input string to search for matching char
 * @a: characters that could be matched
 * Return: pointer to matching char
 */

char *_strpbrk(char *s, char *a)
{
unsigned int i, j;

for (i = 0; s[i] != '\0'; i++)
for (j = 0; a[j] != '\0'; j++)
if (s[i] == a[j])
goto exit;
exit: return (s[i] != '\0' ? s + i : '\0');
}
