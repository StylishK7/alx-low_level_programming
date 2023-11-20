#include "main.h"

/**
  * _strlen_recursion - returns the length of a string
  * @w: string
  * Return: the length of a string
  */

int _strlen_recursion(char *w)
{
	if (*w == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(w + 1));
}

/**
  * comparator - compares each character of the string
  * @w: string
  * @i1: smallest iterator
  * @i2: biggest iterator
  * Return: .
  */

int comparator(char *w, int i1, int i2)
{
	if (*(w + i1) == *(w + i2))
	{
		if (i1 == i2 || i1 == i2 + 1)
			return (1);
		return (0 + comparator(w, i1 + 1, i2 - 1));
	}
	return (0);
}

/**
  * is_palindrome - detects if a string is a palindrome
  * @w: string
  * Return: 1 if w is a palindrome, 0 if not
  */

int is_palindrome(char *w)
{
	if (*w == '\0')
	return (1);
	return (comparator(w, 0, _strlen_recursion(w) - 1));
}


