#include "holberton.h"
#include <stdio.h>

/**
 * main - program that prints the number
 * of arguments passed into it.
 * @argc: the number of arguments
 * @argv: array of pointers to arguments *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
argc[0] = 0;
return (0);
}
