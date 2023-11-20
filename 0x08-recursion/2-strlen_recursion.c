#include "main.h"

/**
  * _strlen_recursion - calculate the length of a string
  * @a: the string to count
  * Return: interger value
  */

int _strlen_recursion(char *a)
{
	if (*a == '\0')
	{
		return (0);
	}
	a++;
	return (_strlen_recursion(a) + 1);
}
