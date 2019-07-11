#include "holberton.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s: the string to count
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
/**
 * checkpalin - check if string is palindrome
 * @str: string to check
 * @len: length of string
 * @count: counter of recursion
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int checkpalin(char *str, int len, int count)
{
if (count >= len)
return (1);
if (str[len] == str[count])
return (checkpalin(str, len - 1, count + 1));
return (0);
}
/**
 * is_palindrome - checks if the string is a palindrome
 * @s: string to be check
 * Return: 1 if string is a palindrome, 0 if it is not.
 */
int is_palindrome(char *s)
{
int len = _strlen_recursion(s);
int count = 0;

return (checkpalin(s, len - 1, count));
}
