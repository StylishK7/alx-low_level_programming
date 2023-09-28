#include "main.h"

/**
  * _puts_recursion - print a string followed by a new line
  * @a: the string to print
  * Return: nothing
  */

void _puts_recursion(char *a)
{
	if (*a == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*a);
	a++;
	_puts_recursion(a);
}

