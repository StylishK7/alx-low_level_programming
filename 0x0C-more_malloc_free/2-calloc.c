#include "main.h"
#include <stdlib.h>

/**
  * _calloc - ..
  * @n: number of members
  * @s: size
  * Return: ..
  */

void *_calloc(unsigned int n, unsigned int s)
{
	int a = 0, b = 0;
	char *p;

	if (n == 0 || s == 0)
		return (NULL);

	b = n * s;
	p = malloc(b);

	if (p == NULL)
		return (NULL);

	while (a < b)
	{
		p[a] = 0;
		a++;
	}
	return (p);
}

