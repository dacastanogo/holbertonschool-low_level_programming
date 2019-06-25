#include "holberton.h"
/**
 * _isalpha: checks if c is alpha
 * @c: letter to check
 * Description: checks if is alphanumeric character
 * Return: 1 if is a letter or 0 if is a number 
*/
int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
return (1);
else
return (0);
}
