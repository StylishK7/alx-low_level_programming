#include "main.h"
#include <stdio.h>

int check_prime(int a, int i);

/**
  * is_prime_number - returns if a number is prime
  * @a: the number to be checked
  * Return: integer value
  */

int is_prime_number(int a)
{
	return (check_prime(a, 1));
}
/**
  * check_prime - check if number is prime
  * @a: the number to be checked
  * @i: the iteration times
  * Return: 1 for prime or 0 opposite
  */

int check_prime(int a, int i)
{
	if (a <= 1)
		return (0);

	if (a % i == 0 && i > 1)
		return (0);

	if ((a / i) < i)
		return (1);
	return (check_prime(a, i + 1));
}

