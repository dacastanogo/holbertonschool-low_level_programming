#include "holberton.h"

/**
 * _strlen - returns the length the string.
 * @s: pointer to a char
 *
 * Return: int length of input string
 */
int _strlen(char *s)
{
int lenght;

for (lenght = 0; *s; s++)
lenght++;

return (lenght);
}
