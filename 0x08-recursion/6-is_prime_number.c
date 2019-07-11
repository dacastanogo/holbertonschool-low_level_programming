#include "holberton.h"

/**
 *primenum - checks if number is prime
 *@n: number to test
 *@counter: tracker to count up for primes
 *
 *Return: 1 if prime, 0 otherwise
 */
int primenum(int n, int counter)
{
if (n == counter)
return (1);
if ((n % counter) != 0)
{
return (primenum(n, counter + 1));
}
else
return (0);
}
/**
 *is_prime_number - decides if integer is prime
 *@n: number to test
 *
 *Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
int counter = 2;

if (n == 1 || n == -1)
return (0);
return (primenum(n, counter));
}
