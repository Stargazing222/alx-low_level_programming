#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string to search for substring
 * @a: that prefix substring must include
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *a)
{
unsigned int i, j, a_l = 0, l = 0;

while (a[a_l] != '\0')
a_l++;
for (i = 0; s[i] != '\0'; i++)
for (j = 0; j < a_l; j++)
if (s[i] == a[j])
l++, j = a_l;
else
if (j == a_l - 1)
goto exit;
exit: return (l);
}
