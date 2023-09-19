#include "main.h"

/**
  * puts_half - prints half of a string
  * @str: the string a print
  * Return: void
  */

void puts_half(char *str)

{
	int a = 0;
	int s;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 1)
	{
		s = (a - 1) / 2;
		s += 1;
	}
	else
	{
		s = a / 2;
	}
	for (; s < a; s++)
	{
	_putchar(str[s]);
				}
	_putchar('\n');
}

