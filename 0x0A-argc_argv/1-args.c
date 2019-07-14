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
int num = 0;

if (argc <= 1)
{
printf("%d\n", argc - 1);
}
else
{
while (argv[num] != '\0')
{
num++;
}
printf("%d\n", num - 1);
}
return (0);
}
