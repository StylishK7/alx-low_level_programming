#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * str_concat - concatenates two strings of any size
  * @a: the first string to concatenate
  * @b: the second string to concatenate
  * Return: the two stirngs concatenated
  */

char *str_concat(char *a, char *b)
{
	int q = 0, w = 0, e = 0, r = 0;
	char *s;

	if (a == NULL)
	a = "";

	if (b == NULL)
		b = "";

	while (a[q])
		q++;

	while (b[w])
		w++;

	r = q + w;
	s = malloc((sizeof(char) * r) + 1);

	if (s == NULL)
		return (NULL);

	w = 0;

	while (e < r)
	{
		if (e <= q)
			s[e] = a[e];

		if (e >= q)
		{
			s[e] = b[w];
			w++;
		}
		e++;
	}
	s[e] = '\0';
	return (s);
}

