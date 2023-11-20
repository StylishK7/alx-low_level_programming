#include "main.h"

/**
  * _pow_recursion - returns the value of a raised to the power of b
  * @a: the value to multiply
  * @b: the times to multiply the value
  * Return: the value multiplied b times
  */

int _pow_recursion(int a, int b)
{
	if (b < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}

