#include "main.h"

/**
  * factorial - calculate the factorial of a number
  * @i: the number to calculate the factorial
  * Return: interger value
  */

int factorial(int i)
{
	if (i < 0)
		return (-1);
	if (i <= 1)
		return (1);

	return (i * factorial(i - 1));
}

