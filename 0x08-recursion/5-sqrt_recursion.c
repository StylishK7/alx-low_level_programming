#include "main.h"
#include <stdio.h>

int _sqrt(int a, int b);

/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @a: number to calculate the natural square root
  * Return: the natural square root
  */

int _sqrt_recursion(int a)
{
	return (_sqrt(a, 1));
}

/**
  * _sqrt - calculates natural square root
  * @a: number to calculate the square root
  * @b: iterate number
  * Return: the natural square root
  */

int _sqrt(int a, int b)
{
	int sqrt = b * b;

	if (sqrt > a)
		return (-1);

	if (sqrt == a)
		return (b);
	return (_sqrt(a, b + 1));
}


