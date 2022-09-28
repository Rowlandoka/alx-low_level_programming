#include "main.h"

/**
* prime_check - test if a number is prime
*@i:first integer
*@n: second integer
* Return: integer
*/
int prime_check(int i, int n)
{
	if (n % i == 0 && n != i)
		return (0);
	if (n % i != 0 && i < n)
		return (prime_check(i + 1, n));
	return (1);
}

/**
* is_prime_number - prints if a number is a prime
*@n: integer to be tested
* Return: integer
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
		return (0);
	return (prime_check(i, n));
}
