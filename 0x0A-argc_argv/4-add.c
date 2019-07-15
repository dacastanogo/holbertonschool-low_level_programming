#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check_digit - checks if a string contains any non-digit characters
 * @x: string to check
 * Return: 1 if string contains non-digit characters, 0 otherwise
 */

int check_digit(char *x)
{
char digit[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
unsigned int i;
unsigned int j;
unsigned int check;

for (i = 0; x[i] != '\0'; i++)
{
check = 0;
for (j = 0; j < 11; j++)
{
if (x[i] == digit[j])
check++;
}
if (check == 0)
return (1);
}
return (0);
}

/**
 * main - entry point function
 * @argc: number of arguments
 * @argv: array containing arguments
 * Return: 1 if any argument contains non-number symbols, 0 otherwise
 */

int main(int argc, char *argv[])
{
unsigned int i;
unsigned int sum = 0;

for (i = 1; i < argc; i++)
{
if (check_digit(argv[i]) == 1)
{
printf("Error\n");
return (1);
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);
return (0);
}
