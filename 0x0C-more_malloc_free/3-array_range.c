#include "main.h"
#include <stdlib.h>

/**
  * array_range - ..
  * @m1: ..
  * @m2:  ..
  * Return: ..
  */

int *array_range(int m1, int m2)
{
	int *a, b = 0;

	if (m1 > m2)
		return (NULL);

	a = malloc((sizeof(int) * (m2 - m1)) + sizeof(int));

	if (a == NULL)
		return (NULL);
	while (m1 <= m2)
	{
		a[b] = m1;
		b++;
		m1++;
	}
	return (a);
}

