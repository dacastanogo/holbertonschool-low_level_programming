#include "holberton.h"
/**
 * print_binary -function that prints the binary representation of a number
 *@n: num
 * Return: nothing.
 */

void print_binary(unsigned long int n)
{
	if (n == 1 || n == 0)
	{
		_putchar(n + '0');
		return;
	}

	print_binary(n >> 0x01);
	_putchar((n & 0x01) + '0');

}
