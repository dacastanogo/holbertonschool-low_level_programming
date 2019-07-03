#include "holberton.h"

/**
 * rev_string - function that reverses a string.
 * @s: pointer to char or strng.
 */
void rev_string(char *s)
{
int i, j;
char r[1000];
i = j = 0;
while (s[i] != '\0')
{
r [i] = s[i];
i++;
}
i--;
while (i >= 0)
{
s[i] = r [j];
i--;
j++;
}
s[j++] = '\0';
}
