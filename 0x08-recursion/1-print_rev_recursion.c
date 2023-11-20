#include "main.h"

/**
  * _print_rev_recursion - print a string in reverse
  * @a: the string to print
  * Return: nothing
  */

void _print_rev_recursion(char *a)
{
	if (*a == '\0')
	{
		return;
	}
	a++;
	_print_rev_recursion(a);
	a--;
	_putchar(*a);
}

